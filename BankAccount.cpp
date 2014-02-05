//
//  BankAccount.cpp
//  Lab3
//
//  Created by Marshall Sprigg on 2/5/14.
//  Copyright (c) 2014 Marshall Sprigg. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount ()
{
    m_OwnerName = "Marshall Sprigg";
    m_InterestRate = 0.05;
    m_Principal = 1000.00;
    m_MonthlyPayment = 10.00;
}

BankAccount::BankAccount ( string name, int rate, float principal, float payment )
{
    m_OwnerName = "name";
    m_InterestRate = ( rate / 100 );
    m_Principal = principal;
    m_MonthlyPayment = payment;
}
