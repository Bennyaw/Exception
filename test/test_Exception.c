#include <stdio.h>
#include "CException.h"
#include "unity.h"
#include "Exception.h"

#define ERR_OUT_OF_BOUND  	3 
#define ERR_UNKNOWN_COMPANY 4 
#define ERR_UNKNOWN_PEOPLE	5

void setUp(void)
{
}

void tearDown(void)
{
}

//names is array 3 of pointers to char
char *name[] = {
	"Ali",
	"David",
	"Ah Beng",
	"Sally"
};

char *nameInIntel[] = {
	"Getha",
	"Sammy",
	"Ah Cheng",
	"Molly"
};

char *nameInNXP[] = {
	"Gambor",
	"Muller",
	"Slokovac",
	"Bambi"
};

char *nameInMicron[] = {
	"Tunder",
	"Sonny",
	"Mambo",
	"Jumbo"
};

char *nameInNestle[] = {
	"Holly",
	"Fred",
	"Kinki"
	
};

char *getNameInTable(int index, char *name[], int maxSize)
{	
	if((index >= maxSize) || (index < 0))
	{
		Throw(ERR_UNKNOWN_PEOPLE);
	}
	return name[index];
} 

char *getName(int index)
{	
	if((index >= 4) || (index < 0))
	{
		Throw(ERR_OUT_OF_BOUND);
	}
	return name[index];
}

char *getNameInCompany(int companyIdx, int nameIdx)
{
	char *name;
	switch(companyIdx)
	{
		case 0:
			name = getNameInTable(nameIdx,nameInIntel,4);
			break;
		case 1:
			name = getNameInTable(nameIdx,nameInNXP,4);
			break;
		case 2:
			name = getNameInTable(nameIdx,nameInMicron,4);
			break;
		case 3:
			name = getNameInTable(nameIdx,nameInNestle,3);
			break;
		default:
			Throw(ERR_UNKNOWN_COMPANY);
	}
	
}


void test_getNameInCompany_given_company1_people2_expect_Slokovac(void) {
	
	char *name;
	CEXCEPTION_T e;
	
	Try
	{
		name = getNameInCompany(1,2);
		TEST_ASSERT_EQUAL_STRING("Slokovac",name);
	}
	Catch(e)
	{
		TEST_FAIL_MESSAGE("Expected no exception thrown ,but received one");
	}

	
}



void test_getName_given_1_expect_David(void) {
	
	char *name;
	CEXCEPTION_T e;
	
	Try
	{
		name = getName(1);
		TEST_ASSERT_EQUAL_STRING("David",name);
	}
	Catch(e)
	{
		TEST_FAIL_MESSAGE("Expected no exception thrown ERR_OUT_OF_BOUND to be thrown, but none");
	}

	
}

void test_getName_given_minus_1_expect_ERR_OUT_OF_BOUND(void) {
	
	char *name;
	CEXCEPTION_T e;
	
	Try
	{
		name = getName(-1);
		TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none");
	}
	Catch(e)
	{
		//printf("error code: %d",e);
	}
	
}

void test_getName_given_4_expect_ERR_OUT_OF_BOUND(void) {
	
	char *name;
	CEXCEPTION_T e;
	
	Try
	{
		name = getName(4);
		TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none");
	}
	Catch(e)
	{
		//printf("error code: %d",e);
	}

	
}