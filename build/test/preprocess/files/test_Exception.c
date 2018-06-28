#include "build/temp/_test_Exception.c"
#include "Exception.h"
#include "unity.h"
#include "CException.h"










void setUp(void)

{

}



void tearDown(void)

{

}





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

  Throw(5);

 }

 return name[index];

}



char *getName(int index)

{

 if((index >= 4) || (index < 0))

 {

  Throw(3);

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

   Throw(4);

 }



}





void test_getNameInCompany_given_company1_people2_expect_Slokovac(void) {



 char *name;

 unsigned int e;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[MY_ID].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; if (

_setjmp((

NewFrame

), __builtin_frame_address (0)) 

== 0) { if (1)

 {

  name = getNameInCompany(1,2);

  UnityAssertEqualString((const char*)(("Slokovac")), (const char*)((name)), (

 ((void *)0)

 ), (UNITY_UINT)(104));

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; } else { e = CExceptionFrames[MY_ID].Exception; (void)e; ; } CExceptionFrames[MY_ID].pFrame = PrevFrame; ; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityFail( (("Expected no exception thrown ,but received one")), (UNITY_UINT)(108));

 }





}







void test_getName_given_1_expect_David(void) {



 char *name;

 unsigned int e;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[MY_ID].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; if (

_setjmp((

NewFrame

), __builtin_frame_address (0)) 

== 0) { if (1)

 {

  name = getName(1);

  UnityAssertEqualString((const char*)(("David")), (const char*)((name)), (

 ((void *)0)

 ), (UNITY_UINT)(124));

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; } else { e = CExceptionFrames[MY_ID].Exception; (void)e; ; } CExceptionFrames[MY_ID].pFrame = PrevFrame; ; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityFail( (("Expected no exception thrown ERR_OUT_OF_BOUND to be thrown, but none")), (UNITY_UINT)(128));

 }





}



void test_getName_given_minus_1_expect_ERR_OUT_OF_BOUND(void) {



 char *name;

 unsigned int e;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[MY_ID].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; if (

_setjmp((

NewFrame

), __builtin_frame_address (0)) 

== 0) { if (1)

 {

  name = getName(-1);

  UnityFail( (("Expected ERR_OUT_OF_BOUND to be thrown, but none")), (UNITY_UINT)(142));

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; } else { e = CExceptionFrames[MY_ID].Exception; (void)e; ; } CExceptionFrames[MY_ID].pFrame = PrevFrame; ; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {



 }



}



void test_getName_given_4_expect_ERR_OUT_OF_BOUND(void) {



 char *name;

 unsigned int e;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[MY_ID].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; if (

_setjmp((

NewFrame

), __builtin_frame_address (0)) 

== 0) { if (1)

 {

  name = getName(4);

  UnityFail( (("Expected ERR_OUT_OF_BOUND to be thrown, but none")), (UNITY_UINT)(159));

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); ; } else { e = CExceptionFrames[MY_ID].Exception; (void)e; ; } CExceptionFrames[MY_ID].pFrame = PrevFrame; ; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {



 }





}
