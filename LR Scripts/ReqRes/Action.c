Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=tRolqVEUduhk43ZiNNi2wA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x15indugowra98@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xDF\\xCB\\xF7\\xF5\\xB1\\xAB\\xD4\\xB4\\x01@\\x00H\\x07:%z00000169-3d5a-eb4c-0000-00005c7a33f2R\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(18);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("reqres.in", 
		"URL=https://reqres.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("DigiCertSHA2ExtendedValidationServerCA.crt", 
		"URL=http://cacerts.digicert.com/DigiCertSHA2ExtendedValidationServerCA.crt", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("email-decode.min.js", 
		"URL=https://reqres.in/cdn-cgi/scripts/5c5dd728/cloudflare-static/email-decode.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("app.css", 
		"URL=https://reqres.in/css/app.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDAaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCUlRUaAhgLydLUXiIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQtOkNGgIYC4ss3EYiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEO3gDRoCGAuTOXSWIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARC0rwcaAhgL_VjDViIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ3DcaAhgLwLZjkiIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQ9KsCGgIYC_FveR8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCwFRoCGAteoQ6BIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCHjQIaAhgL3AL5-iIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ668OGgIYCySyYSciBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIshGgIYC7kwzGAiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("classic-10_7.css", 
		"URL=https://cdn-images.mailchimp.com/embedcode/classic-10_7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(93);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:kBKKcowakchXa3kq5vmBEGQUTWvyskAkZfUp9o4c3Uw&cup2hreq=b73537a44d01d111465c3ce104a084108278acdc57a1f6a42d82b2c674dc5e1f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{bbe78ce5-8a19-4d15-a3b5-c1d17eff782a}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{8be1417b-554e-4ebd-9f07-99cfaecc436f}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{7f34c2ad-19f5-4edd-8b36-6e22b5af5961}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{06457591-64fa-45b1-a415-76f6febcaab0}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{8e5ed87e-3419-4abb-a4cf-60b3110ca3c9}\",\"rd\":6245},\""
		"updatecheck\":{},\"version\":\"432\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{4436a22e-f74b-4ae3-bcd9-972293962517}\",\"rd\":6245},\"updatecheck\":{},\"version\":\""
		"20230916.567854667.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6132,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{dc6a8518-f912-4a1d-9c61-6b99674625de}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\""
		",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{80b43d42-c07b-463b-8876-ebd865fb461e}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{41dfce0d-d433-4fda-ac78-f5ed442fb3b7}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{cc01e9f3-3122-46ef-95cc-255987c74cc3}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{ac6c07fe-a10c-4b84-abe4-3151a81a3968}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{6d9f31e0-9639-47a2-963e-d0e5d2ff2287}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{57adab4c-978c-4fed-928a-d1ac1e835559}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{a692b4c8-d666-4438-a7b0-9635d70e79ac}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\"ping_freshness\":\"{86d7e089-264e-4a8b-8ace-c42fb4fe5454}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{c6fda732-b52b-4c5e-bfef-1aa0d13fb3c6}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{3fa5ac57-7a51-4a81-8406-0db8737e2cd0}\",\"rd\":6245},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{772e2e90-b0ff-49b3-a5b1-ee1dc8a53b39}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.74316953175dd4fc990c661551ce1387c462d705f9eff88d759fb130885a3530\"}]},\"ping\":{\"ping_freshness\":\"{e1c5cab7-bd48-4966-bacb-4f674962703a}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.4.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{ec1f4c48-9f3a-4a6e-beb7-a297fc1e0b4f}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{787c6d4a-ae9f-47a1-9ea6-19ee9274ce03}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6132,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\""
		"ping\":{\"ping_freshness\":\"{95c5c62a-9231-4c18-82e2-a1a45f8b5811}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.2.5.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\""
		"requestid\":\"{bafb8c00-6cd3-428a-9e8c-9e40d9357166}\",\"sessionid\":\"{4f8b0b14-7e1a-43e4-919e-f20e3a108fd3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("app.js", 
		"URL=https://reqres.in/js/app.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("carbon.js", 
		"URL=https://cdn.carbonads.com/carbon.js?serve=CE7D6K3E&placement=reqresin", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-KB622KF", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(122);

	web_custom_request("users", 
		"URL=https://reqres.in/api/users?page=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t17.inf", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-CESXN06JTW&gtm=45je41v0v9136517129za200&_p=1707214704056&gcd=13l3l3l3l1&npa=0&dma=0&cid=309518478.1707214921&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.140%7CChromium%3B121.0.6167.140&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_eu=AAAI&_s=1&sid=1707214921&sct=1&seg=0&dl=https%3A%2F%2Freqres.in%2F&dt="
		"Reqres%20-%20A%20hosted%20REST-API%20ready%20to%20respond%20to%20your%20AJAX%20requests&en=page_view&_fv=1&_nsi=1&_ss=1&tfd=219721", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://reqres.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQnMIvvTQPBsKxIFDR7T91Ehl7BwzbjlnNsSIAmgY6Hpmu8n4hIFDSbzfSsSBQ1uyQ-wIbv56xk1YSbg", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQnMIvvTQPBsKxIFDR7T91Ehl7BwzbjlnNsSIAmgY6Hpmu8n4hIFDSbzfSsSBQ1uyQ-wIbv56xk1YSbg?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		LAST);

	web_custom_request("CE7D6K3E.json", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("CE7D6K3E.json_2", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CK7DT53I.json", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("CK7DT53I.json_2", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:300,400,500,700|Source%20Code%20Pro:500", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("cfae0bcc9eeb2652dd375b40461352efdb6057ba", 
		"URL=https://srv.carbonads.net/static/30242/cfae0bcc9eeb2652dd375b40461352efdb6057ba", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("css.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/css.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("npm.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/npm.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("typescript.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/typescript.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"URL=https://static.cloudflareinsights.com/beacon.min.js/v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("868803", 
		"URL=https://avatars.githubusercontent.com/u/868803?v=4", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"URL=https://fonts.gstatic.com/s/sourcecodepro/v23/HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t34.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("runtime", 
		"URL=https://data.jsdelivr.com/v1/package/npm/@babel/runtime", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("core", 
		"URL=https://data.jsdelivr.com/v1/package/npm/@babel/core", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("prettierrc.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/prettierrc.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("package.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/package.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("jsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/jsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("tsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/tsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t40.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("flat", 
		"URL=https://data.jsdelivr.com/v1/package/npm/react@17.0.0/flat", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reports", 
		"URL=https://nel.heroku.com/reports?ts=1707215403&sid=c4c9725f-1ab0-44d8-820f-430df2718e11&s=%2BbYArQkCv2J4hql0uhtlnmU6XizbRqjKyfuYf2SZbgw%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reports_2", 
		"URL=https://nel.heroku.com/reports?ts=1707215403&sid=c4c9725f-1ab0-44d8-820f-430df2718e11&s=%2BbYArQkCv2J4hql0uhtlnmU6XizbRqjKyfuYf2SZbgw%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":5,\"body\":{\"elapsed_time\":61,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://reqres.in/\",\"sampling_fraction\":0.05,\"server_ip\":\"104.26.11.213\",\"status_code\":404,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://reqres.in/favicon.ico\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}]", 
		LAST);

	web_url("users_2", 
		"URL=https://reqres.in/api/users/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("1-image.jpg", 
		"URL=https://reqres.in/img/faces/1-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("2-image.jpg", 
		"URL=https://reqres.in/img/faces/2-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("3-image.jpg", 
		"URL=https://reqres.in/img/faces/3-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("4-image.jpg", 
		"URL=https://reqres.in/img/faces/4-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("5-image.jpg", 
		"URL=https://reqres.in/img/faces/5-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("6-image.jpg", 
		"URL=https://reqres.in/img/faces/6-image.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://j17lt.csb.app/", 
		"Snapshot=t50.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* Get Single User */

	web_add_cookie("_ga_CESXN06JTW=GS1.1.1707214921.1.0.1707214921.0.0.0; DOMAIN=reqres.in");

	web_add_cookie("_ga=GA1.2.309518478.1707214921; DOMAIN=reqres.in");

	web_add_cookie("_gid=GA1.2.2005273171.1707214921; DOMAIN=reqres.in");

	web_add_cookie("_gat=1; DOMAIN=reqres.in");

	web_add_cookie("_gat_gtag_UA_174008107_1=1; DOMAIN=reqres.in");

	web_add_cookie("_ga_WSM10MMEKC=GS1.2.1707214921.1.0.1707214921.0.0.0; DOMAIN=reqres.in");

	lr_think_time(19);

	web_custom_request("2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CE7D6K3E.json_3", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("CE7D6K3E.json_4", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CK7DT53I.json_3", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("CK7DT53I.json_4", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	/* Post Request */

	lr_think_time(19);

	web_custom_request("users_3", 
		"URL=https://reqres.in/api/users", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"morpheus\",\"job\":\"leader\"}", 
		LAST);

	web_custom_request("CE7D6K3E.json_5", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("CE7D6K3E.json_6", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CK7DT53I.json_5", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("CK7DT53I.json_6", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	/* Put Update */

	lr_think_time(17);

	web_custom_request("2_2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		LAST);

	web_custom_request("CE7D6K3E.json_7", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("CE7D6K3E.json_8", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CK7DT53I.json_7", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("CK7DT53I.json_8", 
		"URL=https://srv.carbonads.net/ads/CK7DT53I.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("2ba64892272a689daf5cc473b26b988461df56e7", 
		"URL=https://srv.carbonads.net/static/30242/2ba64892272a689daf5cc473b26b988461df56e7", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t66.inf", 
		LAST);

	/* Delete Del */

	lr_think_time(9);

	web_custom_request("2_3", 
		"URL=https://reqres.in/api/users/2", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=https://reqres.in/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("CE7D6K3E.json_9", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://reqres.in/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("CE7D6K3E.json_10", 
		"URL=https://srv.carbonads.net/ads/CE7D6K3E.json?segment=placement:reqresin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("99598a49bedd4878110a5f6071eff761b3c1e2da", 
		"URL=https://srv.carbonads.net/static/30242/99598a49bedd4878110a5f6071eff761b3c1e2da", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t70.inf", 
		LAST);

	return 0;
}