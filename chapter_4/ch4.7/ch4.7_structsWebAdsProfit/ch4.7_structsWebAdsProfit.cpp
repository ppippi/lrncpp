// ch4.7_structsWebAdsProfit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Advertising {
	int adsShown;
	double adsClicked;
	double avgProfitPerAdd;
};

void printAdvertising(Advertising ad) {
	std::cout << "Number of adds shown: " << ad.adsShown << std::endl;
	std::cout << "Percentage of adds clicked: " << ad.adsClicked << std::endl;
	std::cout << "Average earnings per click: " << ad.avgProfitPerAdd << std::endl;
	std::cout << "Total earnings: $" << (ad.adsShown * (ad.adsClicked / 100) * ad.avgProfitPerAdd) << std::endl;

}

int main()
{
	Advertising ad;

	std::cout << "How many ads were shown today? ";
	std::cin >> ad.adsShown;
	std::cout << "What percentage of the users clicked the ads today? ";
	std::cin >> ad.adsClicked;
	std::cout << "What was the average earnings per click? ";
	std::cin >> ad.avgProfitPerAdd;

	printAdvertising(ad);
	return 0;
}

