Dynamic_Id()
{
	/* Dynamic ID */

	lr_think_time(4);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDAaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARC4lRUaAhgLpPlA-SIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQwOkNGgIYC2pMBAgiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEPngDRoCGAvK2ts4IgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARC2rwcaAhgLYb6OcyIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ3DcaAhgLwLZjkiIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQgKwCGgIYC7msMTYiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCxFRoCGAv0T3H1IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCMjQIaAhgLXQVBPyIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ-K8OGgIYC0DfqcYiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEI0hGgIYC8a71dQiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	return 0;
}
