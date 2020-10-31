Action()
{
	lr_save_string("UC01", "UC");
	
	lr_start_transaction(lr_eval_string("{UC}_Load_slovardalja"));
	
	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
//
//	web_add_cookie("__utma=196215790.721642572.1604086363.1604086363.1604086363.1; DOMAIN=slovardalja.net");
//
//	web_add_cookie("__utmb=196215790; DOMAIN=slovardalja.net");
//
//	web_add_cookie("__utmc=196215790; DOMAIN=slovardalja.net");
//
//	web_add_cookie("__utmz=196215790.1604086363.1.1.utmccn=(direct)|utmcsr=(direct)|utmcmd=(none); DOMAIN=slovardalja.net");
//
//	web_add_cookie("__gads=ID=e1c612a5d93655c6-229d4daf15b9002a:T=1604086382:RT=1604086382:S=ALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA; DOMAIN=slovardalja.net");

	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/urchin.js", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=721642572&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmcn=1&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=838536387&utmr=-&utmp=/&utmac=UA-4839607-1&utmcc="
		"__utma%3D196215790.721642572.1604086363.1604086363.1604086363.1%3B%2B__utmz%3D196215790.1604086363.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20201027/r20190131/show_ads_impl_fy2019.js", ENDITEM, 
		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTBreadRtStatResponse_53471&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=&allimps=0&fl=0&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2F", ENDITEM, 
		"Url=http://p1.dircont3.com/nv.js", ENDITEM, 
		"Url=https://counter.yadro.ru/hit?q;t44.1;r;s1366*768*24;uhttp%3A//slovardalja.net/;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.23858082708359452", ENDITEM, 
		"Url=https://adservice.google.ru/adsid/integrator.js?domain=slovardalja.net", ENDITEM, 
		"Url=https://adservice.google.com/adsid/integrator.js?domain=slovardalja.net", ENDITEM, 
		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=ca-pub-3303990594242526", ENDITEM, 
		"Url=https://www.googletagservices.com/activeview/js/current/osd.js?cb=%2Fr20100101", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=https://tpc.googlesyndication.com/sodar/sodar2.js", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/gen_204?id=sodar2&v=219&t=2&li=gda_r20201027&jk=1961376086312261&bg="
		"!uLulu5vNAAVp0lmVaVj6a5E85297RAIAAACSUgAAABcKAF7gO5IB6uplz0qC6iiUbDyhOBlrFDSVhx-ne4d5G669nqm-TyX3V-xQnB_eLG05FmU_lEJkVGXjHcKdqiSWTyVe-8duQDmcCpoDAgIqCCueFZh-3A-TaL6QESITkP3QmQHfTQEgIVNca3rG4mnoRemen0Ijcib9FHedn1ouwRdhAXbPcYKoPC-tbPBMeaU_rltF6iLOjvZix4qjTsizQP5oYFIPANHjOBfoBSroWB0TzVGkZbnYRDFrQKVbUBON7TzQgAb5HnA-Sz53XhuwRcsc_Gyxh18Bkxv9CQNWQV4s9O8icE4DypYGrAun1iTWEcMZAT4Z_syeYoWWs91mbm5CYogeL-cp-OlWoZxJBzLcZbCe4yeKvPkECSaFj65oYpbHBn1buZnzMJR7JQ2vuGMs4w3fgiXKB8G_Zjt39O2nKge4pubSE6Y1eHjws_C1iLIjCVPoP"
		"EXRN3JSywK1496b-yR1gAKxEvXZBQpfzw-vOOt0DLsDZLB8oB-109g3hK93LUFBFuVFQsjr_xP1AT2A8gsp42Fk8Vc5Io3zzhKPSkeKGEvO-rZX6to7zMEXwzmA7ZK4s8ROTP3tCyWuvrTzH_K_c8TxCGDdCGSl1BpSTDLxOzYrxxWCXao70zV8VN3dZ6NJp-03fo4sV8DHg0DFxq5ILckt8O2ZjztUbDXRfz8T0uXU48vn5reWfS7QlBY0Duuh0eNh3DTwQ52fm0BXrOUAvoMo69e5ZE1f-hLrFx8duO4YM7wwWVb1hRTw850", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=702996593&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=2111305585&utmr=0&utmp=/view_search.php&utmac=UA-4839607-1&utmcc="
		"__utma%3D196215790.721642572.1604086363.1604086363.1604086363.1%3B%2B__utmz%3D196215790.1604086363.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", ENDITEM, 
		"Url=http://an.yandex.ru/system/context.js", ENDITEM, 
		"Url=http://pagead2.googlesyndication.com/pagead/show_ads.js", ENDITEM, 
		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=pub-3303990594242526&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA", ENDITEM, 
		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/;s1366*768*24;uhttp%3A//slovardalja.net/view_search.php;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.7166116382316416", ENDITEM, 
		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTBreadRtStatResponse_53471&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=http%3A%2F%2Fslovardalja.net%2F&allimps=0&fl=0&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2Fview_search.php", ENDITEM, 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/163a154fd0c0be906789.js", ENDITEM, 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/7a7f1218ad41ee2964e8.js", ENDITEM, 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/3bfae02193b837ceee13.js", ENDITEM, 
		"Url=https://an.yandex.ru/meta/224874?redir-setuniq=1&grab=dNCi0L7Qu9C60L7QstGL0Lkg0YHQu9C-0LLQsNGA0Ywg0JTQsNC70Y8g0L7QvdC70LDQudC9CjHQotC-0LvQutC-0LLRi9C5INGB0LvQvtCy0LDRgNGMINCU0LDQu9GPINC-0L3Qu9Cw0LnQvSAKMtCg0LXQt9GD0LvRjNGC0LDRgtGLINC_0L7QuNGB0LrQsCAK&target-ref=http%3A%2F%2Fslovardalja.net%2Fview_search.php&page-ref=http%3A%2F%2Fslovardalja.net%2F&charset=utf-8&imp-id=4&enable-flat-highlight=1&test-tag=312811058102274&ad-session-id=3099751604086561163&target-id=21012060&pcode-test-ids="
		"286599%2C0%2C78&pcode-flags=%7B%22DEFAULT_SSR_FORMATS%22%3A%5B%22posterVertical%22%2C%22posterHorizontal%22%2C%22motion%22%5D%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22248936%22%5D%2C%22DEFAULT_BLACKLIST_DEVICES%22%3A%5B%5D%2C%22changableMeta%22%3A1%7D&server-side-rendering-enabled-formats=posterVertical%0AposterHorizontal%0Amotion&pcode-version=12857&flash-ver=0&pcode-icookie=6633084301604086554&available-width=704&layout-config="
		"%7B%22win_width%22%3A1366%2C%22win_height%22%3A657%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A8.85%2C%22w%22%3A704%2C%22h%22%3A0%2C%22width%22%3A704%2C%22height%22%3A0%2C%22left%22%3A343%2C%22top%22%3A293%2C%22visible%22%3A1%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&callback=Ya%5B6238424802827%5D", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

//	web_add_header("Origin", 
//		"https://www.google.com");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	lr_think_time(4);

//	web_custom_request("ListAccounts", 
//		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t2.inf", 
//		"Mode=HTML", 
//		"Body= ", 
//		EXTRARES, 
//		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
//		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=86", "Referer=", ENDITEM, 
//		LAST);
//
//	web_add_auto_header("Origin", 
//		"http://slovardalja.net");
//
//	web_url("1akds.json", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A15520%7D%5D&url=&v=2.2.1-1c8fa83&r=im89pq85r5&referrer=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_revert_auto_header("Origin");
//
//	web_url("1akds.json_2", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A29513%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A29523%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A29523%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A29524%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.1-1c8fa83&r=im89pq85r5&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t4.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIUCa5VX7OQwSSaEgkNZ2ez_hIAGgA=?alt=proto", "Referer=", ENDITEM, 
//		LAST);
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_auto_header("Upgrade-Insecure-Requests", 
//		"1");
//
//	web_url("zrt_lookup.html", 
//		"URL=https://googleads.g.doubleclick.net/pagead/html/r20201027/r20190131/zrt_lookup.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t5.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_url("ads", 
//		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=9609848646&adk=4291559146&adf=1803467449&pi=t.ma~as.9609848646&w=160&lmt=1604086378&psa=0&guci=2.2.0.0.2.2.0.0&format=160x600&url=http%3A%2F%2Fslovardalja.net%2F&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086363184&bpp=24&bdt=18816&idt=15201&shv"
//		"=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&correlator=7975299141462&frm=20&pv=2&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=838536387&ga_fc=1&iag=0&icsg=141824&dssz=15&mdo=0&mso=0&u_tz=180&u_his=1&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=180&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid=21067981%2C21068083&oid=3&pvsid=1961376086312261&pem=919&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7CEe%7Cn&abl=XS&pfx"
//		"=0&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&xpc=xmvAFG5R6X&p=http%3A//slovardalja.net&dtd=15231", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		LAST);

//	lr_think_time(9);
//
//	web_url("ads_2", 
//		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&adk=1812271804&adf=3025194257&lmt=1604086378&plat=1%3A32776%2C2%3A32776%2C9%3A32776%2C10%3A32%2C11%3A32%2C16%3A8388608%2C17%3A32%2C24%3A32%2C25%3A32%2C30%3A1081344%2C32%3A32%2C40%3A32&guci=2.2.0.0.2.2.0.0&format=0x0&url=http%3A%2F%2Fslovardalja.net%2F&ea=0&flash=0&pra=7&wgl=1&tt_state="
//		"W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086363209&bpp=9&bdt=18841&idt=15222&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&prev_fmts=160x600&nras=1&correlator=7975299141462&frm=20&pv=1&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=838536387&ga_fc=1&iag=0&icsg=8530432&dssz=16&mdo=0&mso=0&u_tz=180&u_his=1&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&"
//		"u_nplug=3&u_nmime=4&adx=-12245933&ady=-12245933&biw=1349&bih=657&scr_x=0&scr_y=0&eid=21067981%2C21068083&oid=3&pvsid=1961376086312261&pem=919&rx=0&eae=2&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=%7C%7Cs%7C&abl=NS&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&dtd=15233", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t7.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_revert_auto_header("Upgrade-Insecure-Requests");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

//	web_url("adview", 
//		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
//		"CP_R_ZGqcX8yKHqWDxdwPoOu0-A_Cq93eX-TTmJ2hDMTLk57cGRABIMugrg9ghJ3shdgdoAGVlKrJA8gBAqkC-Qced8IESz6oAwHIA8kEqgSrAU_QetLKvswrJNxXWj_ot5zfbnU6fvNtMD4w2ofjxXNqK7ZPrpOl5-b5TY2yXHaCKcH-A8Nb0n7NA1QY4NiKXC3fdVpqNkC0UOEp1srOLwCT8tl-9esAQAe9zcWiWn3qymVpKtjN9RhUzTRtf7Llv25BdoaLB27-YrqSfJC2IRJaXyhNNCAAXuqxmMz96JttBXOHNgi8ElQAKQ9cvI7qM81sJMBzylziNBLh0cAEt9i-uKwDkgUECAQYAZIFBAgFGASSBQQIBRgYkgUFCAUYqAGgBgKAB9Pr1TaoB9XJG6gH8NkbqAfy2RuoB47OG6gHk9gbqAe6BqgH7paxAqgHpr4bqAfs1RvYBwHyBwQQtMcD0ggHCIBhEAEYH4AKAcgLAbIMFHB1Y"
//		"i0zMzAzOTkwNTk0MjQyNTI2wgwCCAHYEwI&sigh=V39VL9hT9_4&tpd=AGWhJmsGtDRAgGol34uMSaQRUYd6cvIUEx47rFUsY2kzoAejlw", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=9609848646&adk=4291559146&adf=1803467449&pi=t.ma~as.9609848646&w=160&lmt=1604086378&psa=0&guci=2.2.0.0.2.2.0.0&format=160x600&url=http%3A%2F%2Fslovardalja.net%2F&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086363184&bpp=24&bdt=18816&idt=15201"
//		"&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&correlator=7975299141462&frm=20&pv=2&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=838536387&ga_fc=1&iag=0&icsg=141824&dssz=15&mdo=0&mso=0&u_tz=180&u_his=1&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=180&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid=21067981%2C21068083&oid=3&pvsid=1961376086312261&pem=919&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7CEe%7Cn&abl=XS"
//		"&pfx=0&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&xpc=xmvAFG5R6X&p=http%3A//slovardalja.net&dtd=15231", 
//		"Snapshot=t8.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjsvPkA9n_jgEW3lHM_U4Udc9WUuDx2U2OffPiyu5A5BuRBPIv5ReASi413ST_FW1F-FbztmSw96fk9o3406G-NMDQfgxQHPr1wENJEAKpzTRgigJz0lFiXmBIHk&sai=AMfl-YThilNcowU5uuPKN5CUBzaGiJFjrUi2C-Y41YZyIGMr0IXvbIC5PdkJx7ciPlkhvnAkPmFo8gUZwFV4&sig=Cg0ArKJSzEg2jGwmW-kCEAE&adk=4291559146&tt=-1&bs=0%2C0&mtos=0,1030,1030,1030,1030&tos=0,1030,0,0,0&p=173,200,773,320&mcvt=1030&rs=0&ht=0&tfs=120&tls=1150&mc=0.8&lte=-1&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=14&"
//		"niot_cbk=60&md=2&btr=0&cpmav=0&lm=2&rst=1604086378423&dlt=9497&rpt=10931&isd=0&msd=0&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-12-11-11-11-0-0-0&tvt=1140&is=160%2C600&iframe_loc=https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fads%3Fclient%3Dca-pub-3303990594242526%26output%3Dhtml%26h%3D600%26slotname%3D9609848646%26adk%3D4291559146%26adf%3D1803467449%26pi%3Dt.ma~"
//		"as.9609848646%26w%3D160%26lmt%3D1604086378%26psa%3D0%26guci%3D2.2.0.0.2.2.0.0%26format%3D160x600%26url%3Dhttp%253A%252F%252Fslovardalja.net%252F%26flash%3D0%26wgl%3D1%26tt_state%3DW3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d%26dt%3D1604086363184%26bpp%3D24%26bdt%3D18816%26idt%3D15201%26shv%3Dr20201027%26cbv&r=v&id=osdim&vs=4&uc=12&upc=0&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=120x600&itpl=4"
//		"&v=20201028", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		LAST);
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

//	web_url("ui", 
//		"URL=https://www.google.com/pagead/drt/ui", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://googleads.g.doubleclick.net/", 
//		"Snapshot=t9.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://pagead2.googlesyndication.com/bg/sYBZi8RubymXUPMccEHraxS349Tofqq0Y87esqoxnno.js", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		LAST);
//
//	web_add_auto_header("Origin", 
//		"http://slovardalja.net");
//
//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	lr_think_time(16);
//
//	web_url("sodar", 
//		"URL=https://pagead2.googlesyndication.com/getconfig/sodar?sv=200&tid=gda&tv=r20201027&st=env", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t10.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_url("1akds.json_3", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22dom%22%2C%22ts%22%3A74795%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.1-1c8fa83&r=im89pq85r5&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t11.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_revert_auto_header("Origin");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_auto_header("Upgrade-Insecure-Requests", 
//		"1");
//
//	web_url("runner.html", 
//		"URL=https://tpc.googlesyndication.com/sodar/sodar2/219/runner.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t12.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://pagead2.googlesyndication.com/bg/sYBZi8RubymXUPMccEHraxS349Tofqq0Y87esqoxnno.js", "Referer=https://tpc.googlesyndication.com/", ENDITEM, 
//		LAST);

	
	lr_end_transaction(lr_eval_string("{UC}_Load_slovardalja"), LR_AUTO);
	
	lr_think_time(10);
	
	lr_start_transaction(lr_eval_string("{UC}_History_slovardalja"));

	
	/* Слово История */

//	web_add_auto_header("Origin", 
//		"http://slovardalja.net");

//	lr_think_time(141);

	web_submit_data("view_search.php", 
		"Action=http://slovardalja.net/view_search.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=search", "Value=история", ENDITEM, 
		"Name=submit_s", "Value=Искать", ENDITEM, 
		LAST);

//	web_revert_auto_header("Upgrade-Insecure-Requests");
	
	web_custom_request("1akds.json_4", 
		"URL=http://newrrb.bid/1akds.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"blocksId\":[\"9050\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/view_search.php\",\"v\":\"2.2.1-~~SHA~VERSION~STRING~~\",\"r\":\"8cmivl9bfu\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1366,\"skip\":[],\"referrer\":\"http://slovardalja.net/\",\"sessionReferrer\":\"http://no.domain/\"}", 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("X-Goog-Update-AppId", 
//		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
//		"bklopemakmnopmghhmccadeonafabnal,ojhpjlocmbogdgmfpkhlaaeamibhnphh");
//
//	web_add_header("X-Goog-Update-Interactivity", 
//		"bg");
//
//	web_add_header("X-Goog-Update-Updater", 
//		"chrome-86.0.4240.111");

//	web_custom_request("json", 
//		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:979947857&cup2hreq=6ac8522a7563d9594c30294a2c93c82735ffeb8f29a57d7a96fc1cb6e980581f", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t15.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{aee3e6ef-1e02-4543-9737-c9d2a867624b}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\""
//		"package\":[{\"fp\":\"1.b4910b29de31631d0cfe05b0ae043ebf1471ac3f94ace38ea5312042aa4b6dfc\"}]},\"ping\":{\"ping_freshness\":\"{af164f18-321a-49e0-b826-c534f9af152e}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"32.0.0.445\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{8283784a-d356-4baa-ac2a-2785323bea38}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\""
//		"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{d25a48a1-d437-4266-8417-6b633761a4b2}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:xa9@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
//		"1.3c7a41cee94e225a40d1158c97cf08f3039bfc9b1c9102745eca434c6f6994db\"}]},\"ping\":{\"ping_freshness\":\"{4bd2e7d5-b664-4df4-ba35-ae3b74f48a90}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"9.18.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GGLS\",\"cohort\":\"1:wr3:x23@0.01\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{3cc0541f-56b6-47d3-8ec6-01005d8adf58}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\""
//		":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ae313a7ed0ea8760432d88301109cd3da6cb7fa96be6c5f9f91ce2963ec22639\"}]},\"ping\":{\"ping_freshness\":\"{de14b344-b219-4da5-b5d9-69bf35db8972}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"6208\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
//		"1.62fca93b66ce468f2e445a0c0aee3643e7946aae6f6c86f45dc79de14e67d8ce\"}]},\"ping\":{\"ping_freshness\":\"{4bf719da-59c5-451f-bce7-745642f61d1c}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\""
//		"{4bdaccd3-0d3b-429a-bb3e-a17ec1c5ca47}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{3f73f694-6cf2-49c4-b3e0-a4cfd237e845}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
//		"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{4e532912-e603-4df5-abe9-951ef9b06037}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:qe3:\",\"cohorthint\":\"Canary\",\"cohortname\":\"Canary\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a83b30cd812d45a24b731a95a8dbfcea3d3b31f0314782d712ca1a5b29782f85\"}]},\"ping\":{\"ping_freshness\":\""
//		"{62dc7d78-09dd-4e3a-bedf-9b450b3c73b0}\",\"rd\":5051},\"tag\":\"canary_eset_b\",\"updatecheck\":{},\"version\":\"86.248.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{311877d0-84a4-46ba-a4b2-a32b8e136f5d}\",\"rd\":5051},\"updatecheck\":{},"
//		"\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4782547b8d7bbab659e8510078e2fb57174630f3eab901ac1a946afd713eb6b5\"}]},\"ping\":{\"ping_freshness\":\"{7b7228f4-d422-4c7b-bc59-c29bf955f8c3}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"2493\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9"
//		":\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.73421ec16fe5533c8c3631729c727571f80ba0a02bd017535d35a1714830e622\"}]},\"ping\":{\"ping_freshness\":\"{363c439e-d7c5-454e-89c7-a62ac58ebdb0}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"2020.10.25.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\""
//		":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{f653be5f-ae1c-4238-91db-b80cda303220}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\""
//		"{3d9c82fb-18e3-4620-92cf-3a61bf1f4a31}\",\"rd\":5051},\"updatecheck\":{},\"version\":\"1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":6},\"lang\":\"ru\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19847\"},\"prodversion\":\"86.0.4240.111\",\"protocol\":\"3.1\",\"requestid\":\"{4ede522e-0b37-46de-8be3-d32bc69f38f8}\",\"sessionid\":\"{aab53636-fc9f-4064-9c17-73c2b0f90941}\",\"updater\":{\""
//		"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\"updaterversion\":\"86.0.4240.111\"}}", 
//		EXTRARES, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjsvPkA9n_jgEW3lHM_U4Udc9WUuDx2U2OffPiyu5A5BuRBPIv5ReASi413ST_FW1F-FbztmSw96fk9o3406G-NMDQfgxQHPr1wENJEAKpzTRgigJz0lFiXmBIHk&sai=AMfl-YThilNcowU5uuPKN5CUBzaGiJFjrUi2C-Y41YZyIGMr0IXvbIC5PdkJx7ciPlkhvnAkPmFo8gUZwFV4&sig=Cg0ArKJSzEg2jGwmW-kCEAE&adk=4291559146&tt=-1&bs=0%2C0&mtos=205,161419,161419,161419,161419&tos=310,161109,0,0,0&p=173,200,773,320&mcvt=161419&rs=0&ht=0&tfs=120&tls=161539&mc=1&lte=-1&bas=0&bac=0&if=1&met=mue&avms=nio&"
//		"niot_obs=14&niot_cbk=60&md=2&btr=0&cpmav=0&lm=2&rst=1604086378423&dlt=9497&rpt=10931&isd=0&msd=214&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-1578-11-1577-1577-0-0-0&tvt=161529&is=160%2C600&iframe_loc=https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fads%3Fclient%3Dca-pub-3303990594242526%26output%3Dhtml%26h%3D600%26slotname%3D9609848646%26adk%3D4291559146%26adf%3D1803467449%26pi%3Dt.ma~"
//		"as.9609848646%26w%3D160%26lmt%3D1604086378%26psa%3D0%26guci%3D2.2.0.0.2.2.0.0%26format%3D160x600%26url%3Dhttp%253A%252F%252Fslovardalja.net%252F%26flash%3D0%26wgl%3D1%26tt_state%3DW3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d%26dt%3D1604086363184%26bpp%3D24%26bdt%3D18816%26idt%3D15201%26shv%3Dr20201027%26cbv&r=u&id=osdtos&vs=4&uc=1578&upc=1&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=0x0&itpl=4&"
//		"v=20201028", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		LAST);

//	web_add_auto_header("Origin", 
//		"http://slovardalja.net");

	
	
	// Парсинг json  //  ответ: "РќРµС‚ Р±Р»РѕРєРѕРІ"
	
	
	web_reg_save_param_json(
        "ParamName=testParam",
        "QueryString=$.error",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
	
	
		
	web_url("1akds.json_5",
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A128132%7D%5D&url=&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1akds.json_6", 
		"URL=http://newrrb.bid/1akds.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"blocksId\":[\"148752\",\"149099\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/view_search.php\",\"v\":\"2.2.1-~~SHA~VERSION~STRING~~\",\"r\":\"8cmivl9bfu\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1366,\"skip\":[],\"referrer\":\"http://slovardalja.net/\",\"sessionReferrer\":\"http://no.domain/\"}", 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_add_header("Origin", 
//		"http://slovardalja.net");

	web_url("1akds.json_7", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A128145%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A128147%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A132992%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A132992%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("zrt_lookup.html_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20201027/r20190131/zrt_lookup.html", 
		"Resource=0", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODYuMC40MjQwLjExMRopCAUQARobCg0IBRAGGAEiAzAwMTABEKbKCRoCGAfs82KiIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDxhwgaAhgH7vq3HSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQjZIIGgIYB_jt-HciBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEPiwCBoCGAfc_acCIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEELwcGgIYBx8bicYiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQlE0aAhgHjRhNMiIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAe2bnt9IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAfGgIYB4GbqZEiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEKEKGgIYB8-fldMiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEJd-GgIYB1F-tK8iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABELTABBoCGAcwigGfIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCYBhoCGAfq0DtcIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

//	web_add_header("Origin", 
//		"http://slovardalja.net");

	web_url("1akds.json_8", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A133026%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A138002%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODYuMC40MjQwLjExMRIbCg0IBRAGGAEiAzAwMTABEKbKCRoCGAfs82KiEhsKDQgBEAYYASIDMDAxMAEQ8YcIGgIYB-76tx0SGwoNCAMQBhgBIgMwMDEwARCNkggaAhgH-O34dxIbCg0IBxAGGAEiAzAwMTABEPiwCBoCGAfc_acCEhkKDQgBEAYYASIDMDAxMAMQFBoCGAcxsclIEhoKDQgBEAgYASIDMDAxMAQQvBwaAhgHHxuJxhIZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_txIaCg0IDxAGGAEiAzAwMTABEJRNGgIYB40YTTISGQoNCAoQCBgBIgMwMDEwARAGGgIYB7Zue30SGQoNCAkQBhgBIgMwMDEwARAfGgIYB4GbqZESGgoNCAgQBhgBIgMwMDEwARChChoCGAfPn5XTEhoKDQgNEAYYASIDMDAxMAEQl34aAhgHUX60rxIbCg0IDhAGGA"
		"EiAzAwMTABELTABBoCGAcwigGfEhoKDQgQEAYYASIDMDAxMAEQmAYaAhgH6tA7XBosCAEIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgRl3xmoIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

//	web_add_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("ads_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=9609848646&adk=4291559146&adf=1803467449&pi=t.ma~as.9609848646&w=160&lmt=1604086560&psa=1&guci=2.2.0.0.2.2.0.0&format=160x600&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086555791&bpp=9&bdt=5000&"
		"idt=4960&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&correlator=4613063621038&frm=20&pv=2&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&ga_fc=1&iag=0&icsg=8431744&dssz=21&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=180&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid=42530671%2C21068084%2C21065724"
		"&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7CEe%7Cn&abl=XS&pfx=0&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&xpc=B1aPVpaZ2Z&p=http%3A//slovardalja.net&dtd=5183", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_header("Origin", 
//		"http://slovardalja.net");

	web_url("1akds.json_9", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A138672%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("ads_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&adk=1812271804&adf=3025194257&lmt=1604086561&plat=1%3A32776%2C2%3A32776%2C9%3A32776%2C10%3A32%2C11%3A32%2C16%3A8388608%2C17%3A32%2C24%3A32%2C25%3A32%2C30%3A1081344%2C32%3A32%2C40%3A32&guci=2.2.0.0.2.2.0.0&format=0x0&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&ea=0&flash=0&pra=7&wgl=1&tt_state="
		"W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086555800&bpp=8&bdt=5009&idt=5308&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&prev_fmts=160x600&nras=1&correlator=4613063621038&frm=20&pv=1&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&"
		"ga_fc=1&iag=0&icsg=545302656&dssz=22&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=-12245933&ady=-12245933&biw=1349&bih=657&scr_x=0&scr_y=0&eid=42530671%2C21068084%2C21065724&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=2&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=%7C%7Cs%7C&abl=NS&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&dtd=5326", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_header("Origin", 
//		"http://slovardalja.net");

	web_url("1akds.json_10", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A138846%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"iframe");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("ads_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=8938184216&adk=1062145475&adf=2802373691&pi=t.ma~as.8938184216&w=120&lmt=1604086561&guci=2.2.0.0.2.2.0.0&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086561223&bpp=8&bdt=10432&idt=9&shv=r20201027&"
		"cbv=r20190131&ptt=5&saldr=sa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&prev_fmts=160x600%2C0x0&nras=1&correlator=4613063621038&frm=20&pv=1&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&ga_fc=1&iag=0&icsg=2233550768256&dssz=28&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=1050&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid="
		"42530671%2C21068084%2C21065724&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7Ce%7Cn&abl=XS&pfx=0&fu=8192&bc=23&ifi=2&uci=a!2&fsb=1&xpc=UgzuCjzq3M&p=http%3A//slovardalja.net&dtd=152", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

//	web_url("adview_2", 
//		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
//		"Cl_KxG2ucX6mPBISo6gS5jbv4AZfbsedfhd2ljJoL69S4zNQBEAEgy6CuD2CEneyF2B2gAc2r0PoDyAEJqQKeB8LzkB9LPqgDAcgDSqoE2QFP0Kxe02eRQTECd9uqb27UYNxXfqSV2s0quXCIYsIIKPzDdQp3m5yVpyxvm3EhkpZhk8D7_XQBfjLfPuVYncv_FpF4p40JMwhIAeY1pbGHa370yp7dAz8V5mRkA1JFFeHxmnrMloGxEkH6ku3qbqb925d_2B7xPewQ1GoSKjKRiZw_FYzdUQawwJOidRjgPmDc_s-PjL2kbdaz0bEuQDEXMqqA6Z_ykFBlJuJOMpiUzNdCMz8LhKSeCOaH2-I9KImQoWOlQXLpdCMGK10uvon0f6x1qqFiKh2ywATOkKqt9gKSBQQIBBgBkgUECAUYBKAGLoAHm9SvBagH8NkbqAfy2RuoB47OG6gHk9gbqAe6BqgH7paxAqgHpr4bqAfs1RvYBwDyBwQQx"
//		"YQB0ggHCIBhEAEYH4AKAcgLAbIMFHB1Yi0zMzAzOTkwNTk0MjQyNTI2wgwCCAHYEw2IFAY&sigh=dVvXEC3yjsw&template_id=494&tpd=AGWhJmuxpdy8fPNolsg96Rcl3wkETddj8Zhcx8Wx7UAyk3fjlg", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=9609848646&adk=4291559146&adf=1803467449&pi=t.ma~as.9609848646&w=160&lmt=1604086560&psa=1&guci=2.2.0.0.2.2.0.0&format=160x600&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086555791&bpp=9&bdt="
//		"5000&idt=4960&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&correlator=4613063621038&frm=20&pv=2&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&ga_fc=1&iag=0&icsg=8431744&dssz=21&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=180&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid="
//		"42530671%2C21068084%2C21065724&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7CEe%7Cn&abl=XS&pfx=0&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&xpc=B1aPVpaZ2Z&p=http%3A//slovardalja.net&dtd=5183", 
//		"Snapshot=t26.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://tpc.googlesyndication.com/simgad/665870979628597983", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		"Url=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcSaQu5tYQ7RpAzDl4Tc-NVfnhZWP4KNT9cgjnkEl8nAsRAze6cNpcA6mTexOoI&usqp=CAI", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		LAST);

	
		
	lr_end_transaction(lr_eval_string("{UC}_History_slovardalja"), LR_AUTO);
	
	lr_output_message("Test output %s", lr_eval_string("{testParam}"));
		
	return 0;
}