//
//  BankAccount.h
//  Lab3
//
//  Created by Marshall Sprigg on 2/5/14.
//  Copyright (c) 2014 Marshall Sprigg. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

#ifndef Lab3_BankAccount_h
#define Lab3_BankAccount_h

class BankAccount
{
    public:
		BankAccount (); //Default constructor
		BankAccount ( string, int, float, float ); //Non-Default constructor
		void setOwnerName ( string );
		float getOwnerName () const;
		void setInterestRate ( float );
		float getInterestRate () const;
		void setPrincipal ( float );
		float getPrincipal () const;
		void setMonthlyPayment ( float );
		float getMonthlyPayment () const;
	
    private:
        string m_OwnerName;
        float m_InterestRate;
		float m_Principal;
		float m_MonthlyPayment;
};


#endif
