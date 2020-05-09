/*
 * operator.h
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */

#ifndef OPERATOR_H_
#define OPERATOR_H_

class Add{
	int a;
	int b;
public:
	void setdata(int a,int b){
		this->a=a;
		this->b=b;
	}

	Add operator +(Add x){
		Add y;
		y.a=a+x.a;
		y.b=b+x.b;

		return y;
	}

	void display(void){
		cout<<"a= "<<a<<" b="<<b<<endl;
	}
};



#endif /* OPERATOR_H_ */
