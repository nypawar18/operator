/*
 * operator.cpp
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */
#include<iostream>
using namespace std;
#include"operator.h"
int main(void)
{
	Add i,j,k;
	i.setdata(4,5);
	j.setdata(9,3);
	k=i+j;
	k.display();
	return 1;
}



