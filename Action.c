Action()
{

	web_url("computers", 
		"URL=http://computer-database.gatling.io/computers", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* Add a new computer */

	web_url("Add a new computer", 
		"URL=http://computer-database.gatling.io/computers/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://computer-database.gatling.io/computers", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);


	web_submit_data("computers_2", 
		"Action=http://computer-database.gatling.io/computers", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://computer-database.gatling.io/computers/new", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=name", "Value=HomeKovVit", ENDITEM, 
		"Name=introduced", "Value=2012-12-12", ENDITEM, 
		"Name=discontinued", "Value=2020-12-12", ENDITEM, 
		"Name=company", "Value=17", ENDITEM, 
		LAST);

	return 0;
}