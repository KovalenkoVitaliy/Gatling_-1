Action1()
{

	web_url("computers", 
		"URL=http://computer-database.gatling.io/computers", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("computers_2", 
		"Action=http://computer-database.gatling.io/computers", 
		"Method=GET", 
		"EncType=", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://computer-database.gatling.io/computers", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=f", "Value=homekovvit", ENDITEM, 
		LAST);

	return 0;
}