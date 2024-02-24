Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	/* Login */

	lr_think_time(35);
	
	//web_reg_save_param("tokenParam", "LB=\"token\":\"", "RB=\"", "Search=Body", LAST);


	//web_reg_save_param_ex(
	//	"ParamName=t1",
	//	"LB=\"token\":\"",
	//	"RB=\"",
	//	"Ordinal=1",
	//	"SaveOffset=1",
	//	SEARCH_FILTERS,
	//	"Scope=BODY",
	//	"IgnoreRedirections=Yes",
	//	LAST);

	//web_reg_save_param_json(
	//	"ParamName=tokenParam",
	//	"QueryString=$.token",
	//	"NotFound=warning",
	//	"SelectAll=No",
	//	SEARCH_FILTERS,
	//	"Scope=BODY",
	//	LAST);

	web_reg_save_param_regexp(
		"ParamName=tokenParam",
		"RegExp=\"token\":\"([^&]+)\"",
		"NotFound=warning",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"vishnu1998thulasi@gmail.com\",\"password\":\"12345678\"}", 
		LAST);
	
	lr_output_message("Token extracted: %s", lr_eval_string("{tokenParam}"));

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {tokenParam}");
	

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}