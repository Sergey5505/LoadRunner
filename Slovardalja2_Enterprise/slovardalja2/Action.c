Action()
{
	int arrSize;
	int indexEven;
	
	double thinkTime;
	thinkTime = lr_get_attrib_double("thinkTime");
	
	lr_save_string("UC01", "UC");
	lr_start_transaction(lr_eval_string("{UC}_01_Загрузка словаря"));

	web_reg_save_param_ex(
    "ParamName=LetterUrl", 
    "LB/IC=<a class=\'chara\' href=\'letter",
    "RB/IC=\'>",
    "Ordinal=all",
//    "SaveLen=-1",
//    "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
	LAST);
	
	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=https://www.google-analytics.com/urchin.js", ENDITEM, 
//		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=517803521&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmcn=1&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=2029611547&utmr=-&utmp=/&utmac=UA-4839607-1&utmcc="
//		"__utma%3D196215790.517803521.1605990105.1605990105.1605990105.1%3B%2B__utmz%3D196215790.1605990105.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pagead/js/r20201112/r20190131/show_ads_impl_fy2019.js", ENDITEM, 
//		"Url=http://p1.dircont3.com/nv.js", ENDITEM, 
//		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTB_5fb976d8d_80138225&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=&allimps=0&fl=0&v=2&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2F", ENDITEM, 
//		"Url=https://www.acint.net/rtbw/1?dp=14&cd=%7B%22st%22%3A53471%2C%22sc%22%3A0%2C%22pl%22%3A0%2C%22ev%22%3A%22run%22%2C%22et%22%3A%22srtb%22%2C%22ec%22%3A386%7D&sid=5fb976d8-dae1-4830-ok6p-igq6xa2jny1l&ref=http%3A%2F%2Fslovardalja.net%2F&r=1605990105", ENDITEM, 
//		"Url=https://www.acint.net/pxl/1?dp=16&id=95403.446640.93390459&sid=5fb976d8-dae1-4830-ok6p-igq6xa2jny1l&r=dg72jcf3p4k8", ENDITEM, 
//		"Url=https://counter.yadro.ru/hit?q;t44.1;r;s1366*768*24;uhttp%3A//slovardalja.net/;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.22810399074964316", ENDITEM, 
//		"Url=https://www.acint.net/pxl/3?dp=16&id=95403.446640.93390459&sid=5fb976d8-dae1-4830-ok6p-igq6xa2jny1l&r=9wemz2a79bhq", ENDITEM, 
//		"Url=https://adservice.google.ru/adsid/integrator.js?domain=slovardalja.net", ENDITEM, 
//		"Url=https://adservice.google.com/adsid/integrator.js?domain=slovardalja.net", ENDITEM, 
//		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=ca-pub-3303990594242526", ENDITEM, 
//		"Url=https://www.googletagservices.com/activeview/js/current/osd.js?cb=%2Fr20100101", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pagead/js/r20201112/r20190131/reactive_library_fy2019.js", ENDITEM, 
//		"Url=https://tpc.googlesyndication.com/sodar/sodar2.js", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pagead/gen_204?id=sodar2&v=219&t=2&li=gda_r20201112&jk=3417265139310360&bg="
//		"!IyClIADNAAUoamvQKFidRomG2gLqawIAAACeUgAAAAxoAQcKAY26eiHx4_1wYqcL_aBkRERaLAoosz0MhNdogje8FZrj0ygAB19NSJ4bQvK5zW3e9RRo0aGpwoPlYkld7l00UUrroKI266ROVm088bzlJMK9Mv4GuC_KAf7fwoxF8BnHvE2YQ-fNe51hNsxmY9yzlp4kGuyYJzAB41CR0O0syckKEgE0ypk_sEv3GAsh12QXEZTN2kvJex23Zj_lfSL0HpQCW1DN9e0ACDEjUrAiwkWFtj-pv_6TvxnZkaRcLcZBtSBLbsZCBMImp1FBjPQzq6lpmNhUkm48ACd-5GW2GVv50ua83UF7IHcm_pqaKATIpLWgOKbLAS44qnwolm5ANnkhNWNkrfn4sWtMC45-Y6oTKDG_gS7jZZptaP2U8Gp-0XSWt_aNC-4Dxbw9AwlsT6fc-6H0efF7oIQ8Z-ZMNiGnyWRm9QKp25WRpHDYEaU6TvEYi"
//		"pch7styQNXFqa1SdzsBxNPYAiDydBvF0ynN3zewB62CLOL--d4-Ek6fiitZRvL-nvegh_STH30QRUsPmQHTyIek2zlQABYWAdkVN5EodeDezCQW2-xdqS4ZqUWGIrcXaJ74Jr5Fy1ICwWWX0hn78aBK7pekikp540wCbd38BZ96cYI8Cdby4b7vkkU-ZQYTlE_EbuX4zizEHQsH-QjHDV3tPkJZSdVa4fjAkedSw7Klh9QjE9t1HsE_1r8TqwS1_5YWPpeacLvGV5-9jKKReM6b2axtaEA-_G8g0ZzsVSBWRRGW33Mi3f0Z9bvzR4yxRELBF1SZorUulhE-AkZ85cu2n7k-LX22p4rvA63MoR9paLxpI9sYi8WT8uYbdreBQQW-sVXyna-1Ue2D_jqJ2hUveKtuSQTqz0uj6_PchOunwdMpx7uoIY3zMEyjFFF4goXVYcdbPJ-w-QatMZrNFCxxo1-7Q_fdBahlcnRwt9bAbIXfSHCzvNJ"
//		"xknWrzqF8lquPPfGVMklVbYJ4C5A3faGckcfHs3Oap9tsf7RtEckz5t7uWoIaq26u2f6mwJlhtRmN6GqVDq_dN5UeCdDq5uZsMUGmHudM8n65ZLnU18wLtU70nZCQ_gXglvdhYWpEQQ-sqTMxwPBBTbs2A6k99up6Kwks9X1AvNmq4-7N51KLLrRuWQHA_46mgsTq7EIBnXQ", ENDITEM, 
//		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=272526815&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=1557384484&utmr=0&utmp=/letter.php?charkod=192&utmac=UA-4839607-1&utmcc="
//		"__utma%3D196215790.517803521.1605990105.1605990105.1605990105.1%3B%2B__utmz%3D196215790.1605990105.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", ENDITEM, 
//		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=ca-pub-3303990594242526&cookie=ID%3Df07a3990bea2d7d4-228f100942b90053%3AT%3D1605990132%3ART%3D1605990132%3AS%3DALNI_MYNFE5uIHQws1jgzLNrP1BZ9XsEiQ", ENDITEM, 
//		"Url=http://an.yandex.ru/system/context.js", ENDITEM, 
//		"Url=http://pagead2.googlesyndication.com/pagead/show_ads.js", ENDITEM, 
//		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/;s1366*768*24;uhttp%3A//slovardalja.net/letter.php%3Fcharkod%3D192;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.9050480715999909", ENDITEM, 
//		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTB_5fb977169_26816042&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=http%3A%2F%2Fslovardalja.net%2F&allimps=0&fl=0&v=2&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192", ENDITEM, 
//		"Url=https://www.acint.net/rtbw/1?dp=14&cd=%7B%22st%22%3A53471%2C%22sc%22%3A0%2C%22pl%22%3A0%2C%22ev%22%3A%22run%22%2C%22et%22%3A%22srtb%22%2C%22ec%22%3A386%7D&sid=5fb97716-522d-10qt-j9jz-ve4t8erb8np8&ref=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&r=1605990167", ENDITEM, 
//		"Url=https://www.acint.net/pxl/1?dp=16&id=95403.446640.93390459&sid=5fb97716-522d-10qt-j9jz-ve4t8erb8np8&r=tkgs7b6tfzyo", ENDITEM, 
//		"Url=https://www.acint.net/pxl/3?dp=16&id=95403.446640.93390459&sid=5fb97716-522d-10qt-j9jz-ve4t8erb8np8&r=rqdlq74sd0bq", ENDITEM, 
//		"Url=https://www.acint.net/aci.js", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13084/f2f8b4ad3901859a71ef.js", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13084/14fe5ececaabdce96da4.js", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13084/a270140fcf737ce49956.js", ENDITEM, 
//		"Url=https://an.yandex.ru/meta/224874?redir-setuniq=1&grab=dNCi0L7Qu9C60L7QstGL0Lkg0YHQu9C-0LLQsNGA0Ywg0JTQsNC70Y8g0L7QvdC70LDQudC9CjHQotC-0LvQutC-0LLRi9C5INGB0LvQvtCy0LDRgNGMINCU0LDQu9GPINC-0L3Qu9Cw0LnQvSAK&target-ref=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&page-ref=http%3A%2F%2Fslovardalja.net%2F&charset=utf-8&imp-id=4&enable-flat-highlight=1&test-tag=437605627854850&ad-session-id=795391605990166940&target-id=75105997&tga-with-creatives=1&pcode-test-ids="
//		"289818%2C0%2C98%3B294348%2C0%2C46%3B296510%2C0%2C92%3B290040%2C0%2C51%3B299791%2C0%2C5&pcode-flags="
//		"%7B%22RMP_POSTER%22%3A%22exp%22%2C%22MARKET_RATING%22%3A%22ON_TOP%22%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22posterVertical%22%2C%22posterHorizontal%22%2C%22motion%22%2C%22zen%22%2C%22300x300%22%2C%22320x100%22%2C%22300x250%22%2C%22336x280%22%2C%22250x250%22%5D%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%5D%2C%22DEFAULT_BLACKLIST_DEVICES%22%3A%5B%5D%2C%22VIDEO_IN_TGO%22%3A%22enabled%22%2C%22PCODEVER%22%3A%2213084%22%7D&server-side-rendering-enabled-formats="
//		"posterVertical%0AposterHorizontal%0Amotion%0Azen%0A300x300%0A320x100%0A300x250%0A336x280%0A250x250&pcode-version=13084&flash-ver=0&pcode-icookie=1666097101605990165&available-width=704&layout-config=%7B%22win_width%22%3A1366%2C%22win_height%22%3A657%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A6.55%2C%22w%22%3A704%2C%22h%22%3A0%2C%22width%22%3A704%2C%22height%22%3A0%2C%22left%22%3A343%2C%22top%22%3A293%2C%22visible%22%3A1%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&callback=Ya%5B4833992687151%5D", ENDITEM, 
//		"Url=https://www.acint.net/hit/?v=0.2.1&uid=5d456029-b6a6-4dc7-8392-086d6d19f908&dp=14&tz=%2B03%3A00&nc=26606715&u=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&r=http%3A%2F%2Fslovardalja.net%2F&rs=1366x768&t=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&oE=1&oP=1&dT=2020-11-21T23%3A22%3A47.648&fu=cf8ea3d8-ae9c-40be-a114-23390c3fea15", ENDITEM, 
//		"Url=https://www.acint.net/mc/?dp=14&tc=1", ENDITEM, 
//		"Url=https://yastatic.net/safeframe-bundles/0.69/host.js", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/2798093/3vrWxJ_0fTLWaFJ6gIE4lw/y300", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/126208/YUN6BAYH9nLZ5JxfyXV6rA/y300", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/2751038/Cd4NY5W-Qw0Nb4nuZCWBXg/wy300", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/2774032/YQoYIxTuoNsJNl-3xnAM_A/y300", ENDITEM, 
//		"Url=https://an.yandex.ru/count/WFOejI_zO5C0PGS0L0jiqCTE_fy4fWK0Km4GGJ4MTxbV000003ZKkHk80WIv0k6BxULAXEPMy0A9owof0S1Zy0K1e0Q0g06f1q60lA-y0NDWW0e1Y0gF0OWB2AeB47-9t3j1W000j2fckQEqy0i6g0_1WDAaohV0kM3W3m6G4FFapzIY-k2X8Vx84QAPfB08y1B__mBW507O5S6AzkoZZxpyO_395l0_WHUP6D0O8VWOW1cu6V__0S0PbTwXzCZFoeyN4G1ro1WKh5NHWE0MGbo9WRbirHvdNS2yMl3FV6qEUW0WtzPEbME6ZBdrwnoiWZ_sFI4og0S0~1="
//		"WWqejI_zO9q17H00P1f3Eb77dGBqYzY0umM00SNF_1M80Rcjdk5Ka07AXlouo820W0AO0Sg6_BX8e074g074k06CuVYW8DW1okVmam7W0VZvlY3e0Ixu0PwJthu1e0AsagC5W0EHewcM38W3dzxHvGkO0ut60g032B03m1k81SM74f05YlqIi0N8wGIu1SZf18Ft0U05MfW6diItDgW6WAW1k0Uq1l470032cydH0iaARkxsrMJ2tVWAWBKOsGj1WBoll05pOEWBnOSIY0oMcjw-0QaCi8bfK-YNtB_e306O3RcSKA0Em8GzsG-04ENne1gCW0AXu17Ilxe2w17OZit3-jtKf4WUta0HzGt_v0F5FvWJ0U0JoEa4oEa4g1IA_HAaaTtx1UWK3CWLne3ZbGJG5T3l_lm5s1N1YlRieu-y_6EW5j3-g_q5i1Qz0yaMq1QMcjw-0O4Nc1UtleGgk1S1m1Srs1V0X3tW5uI6ela5w1S1-1USrA"
//		"Fz1PaOe1WIi1YaqENz1RWO1lWOg-2OqPshjeZ40O0PWggpvfh7uiEV0OaPmooG6G6W6O2e0RWP____0Hm08yL0eMeKFaK83P4sFaB3-faZ0bnH0ch3vru9ElWbF_l1gaQAY2nWUDYEWBf1frqe2k4hUcLDWfCWOq8cu-sE68tgdFDxqXWMbZ-HDpQMqWc17QX9Ih1Dm040~1="
//		"WWyejI_zOAG1BH00v1elnrRGf0B0rDcGX0Y00VJSkWc80OxQdkvHa062iEsTnu20W0AO0OAmxPr7e06mhwW1iA_jdKUu0Vx3oFaVs06YixMJ0U01zfwK8UW1GFW1x93UlW6W0gZwtnQ00xEUmRK1Y0EsxiwF3PW3ku42e0C6i0Fw6uW5-uKJa0NnfnEm1Rdq1BW5kVG4m0MEp2J81V2c2T05iFi1u0LQc0QkqepF2gW6WAW1k0Uq1l470032bFt92krz5pmJuzaBGO2yhxm1Ss3e2_k54uWCfFJUlW6f37pz_P2h3DU_w0m1c0svd51mFQ0Em8GzsG-04D6NWngWgE0Hqh-w0kWHs8xDm_hTrAH8W1xUG5-JXzCyJii_c1C1u1Evz0Ivz0Ie5F6d4_lU_GNe50p85QhOjhi6q1NG-zxz1TWLmOhsxAEFlFnZe1RG_glz1R0MlGF95W00y3_G5gJqthu1WHUO5xZDf2gu5m705pNO5y24FU"
//		"0NxCNC-mNe5m7ucHYW61Mm6AJGvVq5k1W5-1Yhu9ZHdQksYCG1W1c2ghFcciVYmvy1YHd3B90P0Q0PWAW1k1d___y16W0gnK2XQfIdIACrygwXNn0K68M1KG6kA46ruUNI55jQWWbc9cK1ySDt1DH0OAGG4iL7HUmYHMdq1Z8nP3AEyOY1gywP43vf31YCfNG-gPbri4t00G00~1="
//		"WVyejI_zO901hGy0b1bddFpja0Aas_JihIE00OwPkkwxffkfu0680UQLYv1Na06IdO6doO20W0AO0PATWQT9e06EWwW1ZeE1fqcu0OIPoRqWs07cigoL0U01miwbbG7e0Pe2-064hzw-0Q02Zlgi5vW3m8Gze0C4i0Ff78W5bR8Ia0NexHQm1Utd1RW5xUS5nQa2u0Lug0Q0g06u1xG6yGS008Y0WSA7lTOBoGeWTIbawa_a-0g0jHZP2q60lA-y0NDWw0kLiXA83AYntxu1gGp04vIBIKJNl-WC0PWDp9nGi3wW3i24FTaFW12pr_uQeU0Hqh-w0kWHs8xDm_hTrAH8W1xUG6D_Z1_-jyG_c1C1u1FjvmM0580WxUS5g1JexHRmoPNz1UWK3CWLsCpuWxq4q1NqdD3z1TWLmOhsxAEFlFnZe1RG_glz1R0MlGF95j0MgB7VlW615vWNX9x7AxWN0S0NDTWNm8Gzw1S1cHYW61Im6AJGvV"
//		"q5k1W4-1Yhu9ZHdQksYCG1W1c2ghFcciVYmvy1YHd3B90P0Q0PWAW1k1d___y1700MnK2XQXH14K53v9EFq7utUeu8S4LveGqlRoQypvG08umkxX3f1Gm4qn6hGSCr8Nm5hwn9S3B81CXa1TSH0xl5nYRof34q2P-iS6iDtWvOIcVucha4smGS~1="
//		"WXOejI_zO9m1PH0011jIAvPRd08G0D2ubO3g4u01eSgWZ9oJlSvdY06crzZPJv01ufhrvSM0W802c07YclNbHQ01cgW1chW1Wisfs1_O0VJQgY3W0OBSkHxCoDw-0Q02a9EA6803lgw8cWw80zN2sG6O0zML1h030eqZY0NNXHEG1TAF5R05hwy5k0MlhmN01UENJyW5yf0Kq0NvaWBW1JwO1gBl_UW1g0Q0g06u1xG6yGS0miY9XGm8mlIdvFVIFyaA4k5wwvu6tjaBGO2yhxm1Ss3e2zU54waC22hF1lkGtB_e306O3RcSK3-W3i24FO0Gs9B56S2Ga0BG4CANhr-X4MVW4TA_kWBe4TYEpSFwtTIaI80Uta2UjbsvIjR6FvWJ0U0Jhwy5hwy5g1JIZnMm5838q0Uuz_VYAzWKh9go_0Ne50pG5QoQilm5s1N1YlRieu-y_6EW5j3-g_q5i1Qz0yaMq1RCoDw-0O4N0F0_c1Vldjqak1"
//		"S1m1Srs1V0X3te5m6P6A0O4B0OfD3b_GMu607u6AlWcD6TgxQ8n0606OAgi-QQn-B3dm696SCia1a1e1c0g06u6V___m4T02B5GA5g588Y3BTNQ4Xfio1kbGIkA86uuUNVX3US4a0mr-mp4R8yNeMWZu0A1FD2M6n7ucGrov80Y0GP9vcCMrmUM-TCo9yq1iHCO7c3gCG98BZM97hO9k80~1?stat-id=4&test-tag=437606051492865&format-type=13&actual-format=40&banner-test-tags=eyI3MjA1NzYwMzQwNTgxNzUyMSI6IjMyNzY5IiwiNzIwNTc2MDM4NzY3MjY2MDEiOiIzMjc3MCIsIjcyMDU3NjAzNTk4NjkxMzI5IjoiMzI3NzEiLCI3MjA1NzYwMzc2MTM0MDgzNyI6IjMyNzcyIn0%3D&renderWidth=700&renderHeight=371&confirmTime="
//		"2102000&confirmRatio=170000&wmode=0", ENDITEM, 
//		"Url=https://mc.yandex.ru/metrika/watch.js", ENDITEM, 
//		"Url=https://www.acint.net/ping/?v=0.2.1&uid=5d456029-b6a6-4dc7-8392-086d6d19f908&dp=14&tz=%2B03%3A00&nc=86360443&dT=2020-11-21T23%3A22%3A50.653", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13084/d807f81e03f94b7ee2e7.js", ENDITEM, 
//		"Url=https://an.yandex.ru/system/video-ads-sdk/adsdk.js", ENDITEM, 
//		"Url=https://yastatic.net/awaps-ad-sdk-js-bundles/1.0-4263/bundles-es2017/inpage.bundle.js", ENDITEM, 
//		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=1288186597&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=336874556&utmr=0&utmp=/word.php?wordid=142&utmac=UA-4839607-1&utmcc="
//		"__utma%3D196215790.517803521.1605990105.1605990105.1605990105.1%3B%2B__utmz%3D196215790.1605990105.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", ENDITEM, 
//		"Url=https://www.acint.net/rtbw/1?dp=14&cd=%7B%22st%22%3A53471%2C%22sc%22%3A0%2C%22pl%22%3A0%2C%22ev%22%3A%22run%22%2C%22et%22%3A%22srtb%22%2C%22ec%22%3A386%7D&sid=5fb9775c-a083-145i-4i80-7wviufxy43g4&ref=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D142&r=1605990237", ENDITEM, 
//		"Url=http://pagead2.googlesyndication.com/pagead/gen_204?id=ins_no_ifr&sf=true", ENDITEM, 
//		"Url=http://pagead2.googlesyndication.com/pagead/gen_204?id=abg_host&host=slovardalja.net", ENDITEM, 
//		"Url=https://www.acint.net/pxl/1?dp=16&id=95403.446640.93390459&sid=5fb9775c-a083-145i-4i80-7wviufxy43g4&r=9i7n2rpuv6in", ENDITEM, 
//		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/letter.php%3Fcharkod%3D192;s1366*768*24;uhttp%3A//slovardalja.net/word.php%3Fwordid%3D142;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.31602619652314434", ENDITEM, 
//		"Url=https://an.yandex.ru/system/context.js", ENDITEM, 
//		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTB_5fb9775ca_37313492&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&allimps=0&fl=0&v=2&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D142", ENDITEM, 
//		"Url=https://www.acint.net/pxl/3?dp=16&id=95403.446640.93390459&sid=5fb9775c-a083-145i-4i80-7wviufxy43g4&r=4zdh5m04trm4", ENDITEM, 
//		"Url=https://www.acint.net/hit/?v=0.2.1&uid=1de7e26c-bd2c-4119-b788-ccd7c7909603&dp=14&tz=%2B03%3A00&nc=42057792&u=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D142&r=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&rs=1366x768&t=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&oE=1&oP=1&dT=2020-11-21T23%3A23%3A58.734&fu=cf8ea3d8-ae9c-40be-a114-23390c3fea15", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13065/e6a444251f61ce003732.js", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13065/eb95b368af64b22d4b5e.js", ENDITEM, 
//		"Url=https://an.yandex.ru/meta/224874?redir-setuniq=1&grab=dNCi0L7Qu9C60L7QstGL0Lkg0YHQu9C-0LLQsNGA0Ywg0JTQsNC70Y8g0L7QvdC70LDQudC9CjHQotC-0LvQutC-0LLRi9C5INGB0LvQvtCy0LDRgNGMINCU0LDQu9GPINC-0L3Qu9Cw0LnQvSAK&target-ref=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D142&page-ref=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&charset=utf-8&imp-id=4&enable-flat-highlight=1&test-tag=427160267390978&ad-session-id=4073811605990238833&target-id=22678209&tga-with-creatives=1&pcode-test-ids="
//		"289818%2C0%2C49%3B294352%2C0%2C91%3B296510%2C0%2C0%3B299549%2C0%2C72&pcode-flags=%7B%22RMP_POSTER%22%3A%22exp%22%2C%22MARKET_RATING%22%3A%22CONTROL%22%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22posterVertical%22%2C%22posterHorizontal%22%2C%22motion%22%2C%22zen%22%2C%22300x300%22%2C%22320x100%22%2C%22300x250%22%2C%22336x280%22%2C%22250x250%22%5D%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%5D%2C%22DEFAULT_BLACKLIST_DEVICES%22%3A%5B%5D%2C%22PCODEVER%22%3A%2213065%22%7D&server-side-rendering-enabled-formats="
//		"posterVertical%0AposterHorizontal%0Amotion%0Azen%0A300x300%0A320x100%0A300x250%0A336x280%0A250x250&pcode-version=13065&flash-ver=0&pcode-icookie=2038311091605990235&available-width=704&layout-config=%7B%22win_width%22%3A1366%2C%22win_height%22%3A657%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A6.55%2C%22w%22%3A704%2C%22h%22%3A0%2C%22width%22%3A704%2C%22height%22%3A0%2C%22left%22%3A343%2C%22top%22%3A293%2C%22visible%22%3A1%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&callback=Ya%5B7389125024189%5D", ENDITEM, 
//		"Url=https://an.yandex.ru/partner-code-bundles/13065/3d6576f3bfb1917c3700.js", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/2699969/Dxofpm3-UOoMcYch4_1VMA/y300", ENDITEM, 
//		"Url=http://avatars.mds.yandex.net/get-direct/2766645/H7Igl9xiq31CfPTldnn6yA/y300", ENDITEM, 
//		"Url=https://mc.yandex.ru/watch/224874/1?page-url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&page-ref=http%3A%2F%2Fslovardalja.net%2F&charset=utf-8&cnt-class=1&browser-info="
//		"pv%3A1%3Aar%3A1%3Agdpr%3A14%3Avf%3A1oc1oo18i9y4fw%3Afp%3A216%3Afu%3A0%3Aen%3Awindows-1251%3Ala%3Aru-RU%3Av%3A282%3Acn%3A1%3Adp%3A1%3Als%3A0%3Ahid%3A772286234%3Az%3A180%3Ai%3A20201121232355%3Aet%3A1605990201%3Ac%3A1%3Arn%3A179696370%3Arqn%3A1%3Au%3A160599017813148848%3Aw%3A1349x657%3As%3A1366x768x24%3Ask%3A1%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1605990165838%3Ads%3A0%2C0%2C0%2C1%2C3%2C0%2C%2C217%2C0%2C34736%2C%2C%2C242%3Adsn%3A0%2C0%2C0%2C0%2C2%2C0%2C%2C236%2C0%2C34736%2C%2C%2C242%3Arqnl%3A2%3App%3A"
//		"%3Ati%3A1%3Ast%3A1605990240%3At%3A%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD", ENDITEM, 
//		"Url=https://mc.yandex.ru/watch/224874/1?page-url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D142&page-ref=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D192&charset=utf-8&cnt-class=1&browser-info="
//		"pv%3A1%3Aar%3A1%3Agdpr%3A14%3Avf%3A1oc1oo18i9y4fw%3Afu%3A0%3Aen%3Awindows-1251%3Ala%3Aru-RU%3Av%3A282%3Acn%3A1%3Adp%3A1%3Als%3A0%3Ahid%3A116628491%3Az%3A180%3Ai%3A20201121232359%3Aet%3A1605990240%3Ac%3A1%3Arn%3A6659777%3Arqn%3A4%3Au%3A160599017813148848%3Aw%3A1349x657%3As%3A1366x768x24%3Ask%3A1%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1605990200576%3Arqnl%3A1%3App%3A%3Ati%3A1%3Ast%3A1605990240%3At%3A%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D"
//		"0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pagead/gen_204?id=sodar2&v=219&t=2&li=gda_r20201112&jk=3376148330257107&bg="
//		"!jY6ljq7NAAUoamvQKFiyWNE_sxCxHwIAAAEsUgAAABBoAQcKAUIGowo42L7dBbW8O2-slUtWXPsA_qFxeXVdkjyrs9SSCEMtknMww5XJAlTkNalQHsil7yy8xLUyTAt900hFJxI1Xut1sH_xbqhMl8934-dzBQojPKWXKKnEPsUwxoP3bCwY-aHPSvv0TfgYGTChsMhFJQfbm8IF-ZPjw2M6BMz-VU8GYgl82W2pmQedruIKPitkrPXGTJSUKf4b21uCHQLp_pPGKMqGwMmZj0pfYL9c_XUKisHVQ-_fcLyCBsKVjPDQd96nMebhchW0wf3xZpPjfOhEd1lL0Dy5wwrZ4rFcZ_3IsPHQRN8_tW3-eOICNUxGgXLeA9ZtKDIGpAA7H_3rCYFDHw4ZKSv7_OX6h15aB2eKTK4hduJTrBKWMcg2S8Oy4mbrj6hKyKeK4MRp39H3kCpk907oZk90iVU5qmcWwTYNmQHivJLMkL43w6xaGzzxl"
//		"gZLQPkL_ugafop4c6JpV5m49SB2ZPNM4txaT1Wjrkc-Hh7PAs-ibFvz1sbK90MI11PxU9lisme9i8uYgfwYxlY94CMOwB5H5mT7cZbr68jxJKqEpHqwJmmUxCCjevD4QXh3itWCZCeRQIXlpPTqDyTeJAewsRN8t4-wDETTZG3VzgqHrX-uLmZEx_kzlV421MnIesDT7nIGnL8CPbNL44mEXNLNAwIGN-1EYqPJcRyaKmuXKsnSTCuEXppuxhAhZu37zN2D0pAnBbgHNAP7ecxsjRQtTVAkI5Fj2H17zbDF7m9j9p9qjC-AHog_yRllYYbnT13vHdTrDY9VmLAkGBSjJrRTPnWXahRd27Vn-ViEZHr_-ko_V4J4JmuV5YJc6CgYOuwnbqqTk3fuDxIIHVAkYzMJx8zItgYO6ZFPs-HsYDMjS4TYd3ylSYnsAog9AKXH7d3F2A3hgnAvJudq7UcFQP5CaYn742Ak9ElcUAVBaTUsXXF61Yl"
//		"sont-2DH6y8Al728ahM0bu-A2seostK6FW8ko5tEzqtiSxA31nvtbpE0fqhLe_p5_AOfyN2h9-HvDc-3CtT4rhHEZgS4x9hZWvLYfwJr9nLNi-GUGwMlXRMq6ZBI", ENDITEM, 
//		"Url=https://www.acint.net/ping/?v=0.2.1&uid=1de7e26c-bd2c-4119-b788-ccd7c7909603&dp=14&tz=%2B03%3A00&nc=68845301&dT=2020-11-21T23%3A24%3A01.740", ENDITEM, 
//		"Url=https://an.yandex.ru/rtbcount/1OrhVkaG0La100000000U9mpB8-to3aaL9nW6LU-Cvu123nX8g4D3XDvOxFoc1bI6O7YcUNn4kKWyL8M8A-MGOk1ePKHHCvaT7p000OB6R_qGbWh6KzOG5Xx6NU8y38S1VElCe8Ckil88CF0y9Tn5XC3mrmcaCXIfW0WjPP90aYUPVeF1A-O17Yz3WEjP61W_xbix-8jh0n_cJg4WLOoim8rz38h0icfp23DSvcPG1O2IGMmXHkP2xDUHWY9TLfS1SlV1PC_cHsS-26EPBaqtm_CMi7IDvzn0yj_663SWSG-WCI-oGBnomVxXoopPeB0JVktB20VdMGzh0EHkyaQ_VfbZdAdfynNLf0c06u5RX40?confirmTime=2103000&confirmRatio=990000&test-tag=427160267390978&format-type=13&actual-format=40&rnd="
//		"6851398149137&renderWidth=704&renderHeight=369", ENDITEM, 
		LAST);
	
	//  Сохраняем рандомную ссылку в параметр "LetterUrlRandom"
   	 lr_save_string(lr_paramarr_random("LetterUrl"),"LetterUrlRandom");
	
	 web_reg_save_param_ex(
    "ParamName=WordUrl", 
    "LB/IC=<a class=\'chara\' href=\'word",
    "RB/IC=\'>",
    "Ordinal=all",
//    "SaveLen=-1",
//    "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
	LAST);
	
   	 
   	 lr_end_transaction(lr_eval_string("{UC}_01_Загрузка словаря"), LR_AUTO);
   	 
   	 lr_think_time(thinkTime);
   	 
   	 lr_start_transaction(lr_eval_string("{UC}_02_Нажимаю букву"));
   	 

	 /* Нажимаю букву */

	web_url("letter.php", 
		"URL=http://slovardalja.net/letter{LetterUrlRandom}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjsuSoU9qG-dZRwFcJZ0SHfINK5cu_zV4C2k0MxpS7XeiKIuxrkiVPZLtIZ4IfPnQZ_eyamIz2NmC1G4iLYvAWTUgKosdxBzPOY07yrfoblDIHHgIZQ6NrRV95B0&sai=AMfl-YTlckTV6ReHGIEPitRK0U-AasKY1X13xhHRnMEycJkrLDjS6j9LclyDRKkyqyh4BmPUAmgnGg0Ja1sX&sig=Cg0ArKJSzGJJZ4RNXbGbEAE&adk=1812271808&tt=-1&bs=0%2C0&mtos=1027,1027,1027,1027,1027&tos=1027,0,0,0,0&p=0,0,287,344&mcvt=1027&rs=1&ht=0&tfs=25092&tls=26119&mc=1&lte=0&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=79&niot_cbk"
//		"=24989&md=2&btr=0&cpmav=0&lm=2&rst=1605990134304&dlt=5087&rpt=4&isd=0&msd=0&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-12-9-11-11-0-0-0&tvt=26112&is=344%2C287&iframe_loc=https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fhtml%2Fr20201112%2Fr20190131%2Fzrt_lookup.html%3Ffsb%3D1&r=v&id=osdim&vs=4&uc=12&upc=0&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=344x287&itpl=22&v=20201118", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
//		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu5mxKOzY.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjstkin9VTw-0Wcmuyb_bbcDl-ofH9ZQs-pCqXCp8TDljCWNQdVRkusT9FwOcuV436e1aZZUyto1ZuXNu-hyKP6Nca9218TLj8lvO0BXLQNooboalvcaf2Z-kJkE&sai=AMfl-YQAQJtQJDFbHBczQUQpa_hEQabk8dEs-2jDMfMlduM3jLSXgz4MPWxpNIfv_ADQiCZeg7KeQLpzZfJ9&sig=Cg0ArKJSzNY-J2n1gvB0EAE&adk=4291559146&tt=-1&bs=0%2C0&mtos=0,31633,31633,31633,31633&tos=0,31633,0,0,0&p=173,180,773,340&mcvt=31633&rs=0&ht=0&tfs=131&tls=31764&mc=0.8&lte=-1&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=22&"
//		"niot_cbk=74&md=2&btr=0&cpmav=0&lm=2&rst=1605990128544&dlt=4775&rpt=5652&isd=0&msd=0&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-307-17-306-306-0-0-0&tvt=31750&is=160%2C600&iframe_loc=https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fads%3Fguci%3D2.2.0.0.2.2.0.0%26client%3Dca-pub-3303990594242526%26output%3Dhtml%26h%3D600%26slotname%3D9609848646%26adk%3D4291559146%26adf%3D1803467449%26pi%3Dt.ma~"
//		"as.9609848646%26w%3D160%26lmt%3D1605990128%26psa%3D0%26format%3D160x600%26url%3Dhttp%253A%252F%252Fslovardalja.net%252F%26flash%3D0%26wgl%3D1%26tt_state%3DW3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d%26dt%3D1605990104776%26bpp%3D19%26bdt%3D28262%26idt%3D23714%26shv%3Dr20201112%26cbv&r=u&id=osdtos&vs=4&uc=307&upc=1&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=0x0&itpl=4&v=20201118", "Referer=https://"
//		"googleads.g.doubleclick.net/", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjsuSoU9qG-dZRwFcJZ0SHfINK5cu_zV4C2k0MxpS7XeiKIuxrkiVPZLtIZ4IfPnQZ_eyamIz2NmC1G4iLYvAWTUgKosdxBzPOY07yrfoblDIHHgIZQ6NrRV95B0&sai=AMfl-YTlckTV6ReHGIEPitRK0U-AasKY1X13xhHRnMEycJkrLDjS6j9LclyDRKkyqyh4BmPUAmgnGg0Ja1sX&sig=Cg0ArKJSzGJJZ4RNXbGbEAE&adk=1812271808&tt=-1&bs=0%2C0&mtos=1338,1338,1338,1338,1338&tos=1338,0,0,0,0&p=0,0,287,344&mcvt=1338&rs=1&ht=0&tfs=25092&tls=26430&mc=1&lte=0&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=79&niot_cbk"
//		"=24989&md=2&btr=0&cpmav=0&lm=2&rst=1605990134304&dlt=5087&rpt=4&isd=0&msd=0&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-15-9-14-14-0-0-0&tvt=26422&is=344%2C287&iframe_loc=https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fhtml%2Fr20201112%2Fr20190131%2Fzrt_lookup.html%3Ffsb%3D1&r=u&id=osdtos&vs=4&uc=15&upc=0&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=0x0&itpl=22&v=20201118", "Referer=https://googleads.g.doubleclick.net/", ENDITEM, 
		LAST);

	//   Получаем длинну массива WordUrl и кладем ее в переменную arrSize
	 arrSize = lr_paramarr_len("WordUrl");
    
	//	 rand() генерирует число и далее вычисляется остаток от деления на arrSize от этого числа
	 indexEven = rand() % arrSize + 1;
	 	lr_output_message("indexEven = %d", indexEven);
	 
	 if (indexEven % 2 != 0) {
	 	
	 	if (indexEven == arrSize){
	 		indexEven--;
	  		lr_output_message("indexEven2 = %d", indexEven);
		 	}
	 	
	 	else if (indexEven == 1){
	 		indexEven++;
	 	 	lr_output_message("indexEven3 = %d", indexEven);
	 	}
	 	
	 	else {
	 		indexEven++;
	 		lr_output_message("indexEven4 = %d", indexEven);
	 	}
	 }
	 
	 // Сохраняем четный индекс рандомного числа в параметр "WordUrlRandomIndexEven"
	 lr_save_string(lr_paramarr_idx("WordUrl", indexEven), "WordUrlRandomIndexEven");
	 
	 	 
	  web_reg_save_param_ex(
    "ParamName=Text",
    "LB/IC=<div align=\"justify\" class=\"textdiv\">",
    "RB/IC=</div>",
//    "Ordinal=all",
//    "SaveLen=-1",
//    "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
	LAST);
	
	 lr_end_transaction(lr_eval_string("{UC}_02_Нажимаю букву"), LR_AUTO);
	 
	 lr_think_time(thinkTime);
   	 
   	 lr_start_transaction(lr_eval_string("{UC}_03_Нажимаю слово"));

	 
	 /* Нажимаю слово */
	
	web_url("word.php", 
		"URL=http://slovardalja.net/word{WordUrlRandomIndexEven}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/letter.php?charkod=192", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=https://an.yandex.ru/mapuid/adobedmp/?redir-setuniq=1", "Referer=https://yastatic.net/", ENDITEM, 
//		"Url=https://x01.aidata.io/0.gif?pid=YANDEX&bounce=1", "Referer=https://yastatic.net/", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjstlxN_jWURl2dzTwZ3AvMmAN1OvdrVVPhKnYk5Lcj58Xx3uzqWHcLbtgqbCfjto7XidcBBNZiGVlCjZm2vACac-714eRHmpBmckJCviEfvGCA5g0h2ml8pCq38pzLLvm0McYtMVK2Up6WSULu_tJFkt&sai=AMfl-YQtjgm2dXq4HRmUNoA4az6Xl4T9qBm2i1zu7rvw13CNS8ya_7rCEFf5FRVdP6DvAL3YFByuBPJ76VO2of0bFEpe-E3ZvclLubg9m9VB_WKYFOu6pOPWyrsm3UJ829CT&sig=Cg0ArKJSzONvinofwy2NEAE&cid=CAASPeRoJ-_HASITAwfP6cDVS0Lih6y4r8q2SlVkw1AWmCTmMY9TblOQ9xJwmyuRIJGvasf1EHd2Z6T5r20yCtM&adk=4291559146&tt=-1&bs="
//		"0%2C0&mtos=0,2828,3137,3340,7081&tos=0,2828,309,203,3741&p=173,180,773,340&mcvt=3137&rs=0&ht=0&tfs=121&tls=6839&mc=0.8&lte=-1&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=19&niot_cbk=50&md=2&btr=0&cpmav=1&lm=2&rst=1605990166288&dlt=342&rpt=66&isd=0&msd=900&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-126-17-125-125-0-0-0&tvt=68186&is=160%2C600&iframe_loc="
//		"https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fads%3Fguci%3D2.2.0.0.2.2.0.0%26client%3Dca-pub-3303990594242526%26output%3Dhtml%26h%3D600%26slotname%3D9609848646%26adk%3D4291559146%26adf%3D1803467449%26pi%3Dt.ma~"
//		"as.9609848646%26w%3D160%26lmt%3D1605990166%26psa%3D1%26format%3D160x600%26url%3Dhttp%253A%252F%252Fslovardalja.net%252Fletter.php%253Fcharkod%253D192%26flash%3D0%26wgl%3D1%26tt_state%3DW3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d%26dt%3D1605990166140%26bpp%3D7%26bdt%3D276%26idt%3D&r=u&id=osdtos&vs=4&uc=126&upc=0&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=0x0&itpl=4&v=20201118", "Referer=https://"
//		"googleads.g.doubleclick.net/", ENDITEM, 
//		"Url=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjstu0em8aWdnZ8eJWl3Kb0td7B-n6y-BUnPah6Wft0TVcdGvCy7X45a9uY2m9mDkU2RTQ7saHsUWfJIKQcc0V-CL35cuPRuguWYJuMHur1p_7dZg4VF6feTIeiUmaO2RDEvzqm08GrdI&sai=AMfl-YQqC09wJy-bBCm7R-urLsy8n-SePRn9_2mRSJqS2vMIzqzAL4r4iLMUMyjGiO-J1wyDfMZubkyR0gpCo8jVGtsQd8wX4lV3v3o_vzOC0YtMe9SbbBcWroJtay4h3mUd&sig=Cg0ArKJSzD1_9diFujQKEAE&cid=CAASPeRonL0hbkDMoYoaJH-bxwYkf4wCXrH7A-fmJxgYfCCnTOD6lkGzq09WU9Yo8t4tFIOPXUU_RhK5JybcJkA&adk=1062145475&tt=-1&bs=0%2C0&mtos=0,0,"
//		"0,0,0&tos=0,0,0,0,0&p=173,1050,773,1170&mcvt=0&rs=0&ht=0&mc=0&lte=-1&bas=0&bac=0&if=1&met=mue&avms=nio&niot_obs=12&niot_cbk=48&md=2&btr=0&cpmav=1&lm=2&rst=1605990167297&dlt=557&rpt=5&isd=0&msd=900&xdi=0&postrxl=1&ps=-12245933%2C-12245933&scs=1366%2C768&pt=-1&bin=4&deb=1-0-0-59-11-58-58-0-0-0&tvt=57612&is=120%2C600&iframe_loc="
//		"https%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fads%3Fguci%3D2.2.0.0.2.2.0.0%26client%3Dca-pub-3303990594242526%26output%3Dhtml%26h%3D600%26slotname%3D8938184216%26adk%3D1062145475%26adf%3D2802373691%26pi%3Dt.ma~"
//		"as.8938184216%26w%3D120%26lmt%3D1605990167%26url%3Dhttp%253A%252F%252Fslovardalja.net%252Fletter.php%253Fcharkod%253D192%26flash%3D0%26wgl%3D1%26adsid%3DNT%26tt_state%3DW3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d%26dt%3D1605990167072%26bpp%3D8%26bdt%3D1209%26idt%3D9%26shv%3Dr2020&r=u&id=osdtos&vs=3&uc=59&upc=0&tgt=DIV&cl=1&cec=1&wf=0&cac=1&cd=0x0&itpl=4&v=20201118", "Referer=https:"
//		"//googleads.g.doubleclick.net/", ENDITEM, 
		LAST);
	 
	 lr_output_message(lr_eval_string("{Text}"));

	 lr_end_transaction(lr_eval_string("{UC}_03_Нажимаю слово"), LR_AUTO);
	
	return 0;
}