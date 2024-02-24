Action()
{

	lr_think_time(7);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=tRolqVEUduhk43ZiNNi2wA%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
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

	/* Dynamic Table */

	lr_think_time(17);

	web_url("dynamictable", 
		"URL=http://uitestingplayground.com/dynamictable", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:EPGbRGPNlfk-IyPeH4_DfQoCt6TKJEKwQU2-N6vvHN0&cup2hreq=429fecd3f446242d0908e0676ec3b44fbb10c874827029c28c61537550653986", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{6b484dcc-d9f2-4643-94f8-a026b4a29d0c}\",\"rd\":6247},\"updatecheck\":{},\"version\":\""
		"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{3151a034-895f-47a9-b225-b85641f408a6}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,"
		"\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{05885832-f536-4e9a-8552-e75d78445e5b}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{887736a1-5499-4eb5-9a96-5063ff558e35}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6132,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\""
		"ping_freshness\":\"{53830a17-03ab-42a8-a74e-8b5a405a8d95}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6132,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{980afbd4-c8c3-4973-90f1-ac7d3f838379}\",\"rd\":6247},\""
		"updatecheck\":{},\"version\":\"2024.2.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{496c8c1d-dd31-4c49-aad0-f93b2a57f33f}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{87f944e2-5871-4fa5-b4bc-00d10375c745}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{13af2480-843f-42d4-b8ae-90ad9acabd3f}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\""
		"ping_freshness\":\"{83b7d82b-91eb-47c6-b08b-9f6f98db8451}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{479ed945-fe6b-4210-8e5a-7b99a8ffdb96}\",\"rd\":6247},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{73b11ca5-2be6-45c6-b410-5d09c76d7667}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{6b710592-bf97-461d-b4f6-037b1abcf722}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{ee240fbf-c89b-4c17-bb4f-8a027c1340da}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\""
		":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{2fa293e4-785c-4f75-a69a-e251a7e51196}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{cd4c99fc-83c6-44f0-b9d8-ee48f2ea1ea5}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\"}]},\"ping\":{\"ping_freshness\":\"{96a6b49c-73dd-4249-ab73-9391ebdcd652}\",\"rd\":6247},\"updatecheck\":{},\"version\":\""
		"2024.2.5.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{fa9a9a49-64ae-402c-b29b-00e099806681}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{eaf001eb-5006-4606-a9fb-a13815655e5a}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{4b46e1d9-7440-4c87-8b5e-1126fe37a6e3}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping"
		"\":{\"ping_freshness\":\"{a6735b35-f6c3-48a2-a051-4f33fc80707c}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:27yr@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{950c6d30-d19f-4426-8a85-eb26446dbb5f}\",\"rd\":6247},"
		"\"updatecheck\":{},\"version\":\"2024.1.17.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{0a0a7c6c-1753-47ce-a915-5744ac1ded6e}\",\"sessionid\":\""
		"{ce571f12-0ebf-40eb-9187-922175466007}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	/* Black to Home Page */

	lr_think_time(36);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":36398,\"downloaded\":2359,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"433\",\"previousversion\":\"432\",\"total\":2359,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"lmelglejhemejginpboagddgdfbepgmp/1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f/1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48/b0309f505d747d23dd12ce674a3f58ee302fd42040f155251d0ed1620e8f775a.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\",\"nextversion\":\"433\",\"previousfp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\",\"previousversion"
		"\":\"432\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\"}]},\"version\":\"433\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\""
		"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{7b6ada3f-402b-4fd1-8189-62f2f5c02871}\",\"sessionid\":\"{ce571f12-0ebf-40eb-9187-922175466007}\",\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	lr_think_time(12);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"event\":[{\"download_time_ms\":12043,\"downloaded\":3560,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.7.0\",\"previousversion\":\"2024.2.5.0\",\"total\":3560,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"niikhdgajlphfehepabhhblakbdgeefj/1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06/1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217/7fdda59eb7050464bd021a8735fd22ecc73548629011dcc6d559e3ba39bef7bb.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\",\"nextversion\":\"2024.2.7.0\",\"previousfp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\",\""
		"previousversion\":\"2024.2.5.0\"}],\"installdate\":6132,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\"version\":\"2024.2.7.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{d2256143-b871-473f-8331-150f2ca96650}\",\"sessionid\":\"{ce571f12-0ebf-40eb-9187-922175466007}\",\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4039,\"downloaded\":6584,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.7.5\",\"previousversion\":\"2024.2.5.1\",\"total\":6584,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"jflhchccmppkfebkiaminageehmchikm/1.84bce1360e6c43a7ecfda79e1ceed5e28e6690c55aaadc82af8dc0bad9d3ca51/1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79/77bf83e516e0772611967f95491c61631a6031af2a83d6213d12cba7da13e36a.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.84bce1360e6c43a7ecfda79e1ceed5e28e6690c55aaadc82af8dc0bad9d3ca51\",\"nextversion\":\"2024.2.7.5\",\"previousfp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\",\""
		"previousversion\":\"2024.2.5.1\"}],\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.84bce1360e6c43a7ecfda79e1ceed5e28e6690c55aaadc82af8dc0bad9d3ca51\"}]},\"version\":\"2024.2.7.5\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{33a1b0b2-fd6d-4fb1-9623-1ac44dbe81e4}\",\"sessionid\":\"{ce571f12-0ebf-40eb-9187-922175466007}\",\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

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

	/* Black to HomePage
	*/

	return 0;
}
