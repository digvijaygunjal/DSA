#include <stdio.h>

int testCount=-1;
int passCount=0;
void setup();
void tearDown();

void fixtureSetup();
void fixtureTearDown();
void incrementTestCount();
void incrementPassCount();
int currentTestFailed=0;

void testStarted(char* name){
	incrementTestCount();
	currentTestFailed=0;
	printf("\t%s\n",name);
}

void testEnded(){
	if(!currentTestFailed)
		incrementPassCount();
}

void resetTestCount(){
	testCount=0;
	passCount=0;
	printf("********* Starting tests\n\n");
}

void summarizeTestCount(){
	printf("\n********* Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
}

void incrementTestCount(){
	testCount++;
}

void incrementPassCount(){
	passCount++;
}

void testFailed(const char* fileName, int lineNumber, char* expression){
	currentTestFailed = 1;
	printf("\t\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
}

int main(){
	fixtureSetup();
	resetTestCount();

	testStarted("test_isort_for_5_integers");
	setup();
		test_isort_for_5_integers();
	tearDown();
	testEnded();
	testStarted("test_isort_best_case_for_5_integers");
	setup();
		test_isort_best_case_for_5_integers();
	tearDown();
	testEnded();
	testStarted("test_isort_worst_case_for_5_integers");
	setup();
		test_isort_worst_case_for_5_integers();
	tearDown();
	testEnded();
	testStarted("test_isort_for_bank_account_by_balance");
	setup();
		test_isort_for_bank_account_by_balance();
	tearDown();
	testEnded();
	testStarted("test_isort_for_bank_account_by_balance_best_case");
	setup();
		test_isort_for_bank_account_by_balance_best_case();
	tearDown();
	testEnded();
	testStarted("test_isort_for_bank_account_by_balance_worst_case");
	setup();
		test_isort_for_bank_account_by_balance_worst_case();
	tearDown();
	testEnded();
	testStarted("test_isort_with_float_values");
	setup();
		test_isort_with_float_values();
	tearDown();
	testEnded();
	testStarted("test_isort_with_float_values_best_case");
	setup();
		test_isort_with_float_values_best_case();
	tearDown();
	testEnded();
	testStarted("test_isort_with_float_values_worst_case");
	setup();
		test_isort_with_float_values_worst_case();
	tearDown();
	testEnded();
	testStarted("test_isort_for_caharacters");
	setup();
		test_isort_for_caharacters();
	tearDown();
	testEnded();
	testStarted("test_isort_for_caharacters_best_case");
	setup();
		test_isort_for_caharacters_best_case();
	tearDown();
	testEnded();
	testStarted("test_isort_for_caharacters_worst_case");
	setup();
		test_isort_for_caharacters_worst_case();
	tearDown();
	testEnded();

	summarizeTestCount();
	fixtureTearDown();
	return 0;
}

void setup(){}

void tearDown(){}

void fixtureSetup(){}

void fixtureTearDown(){}
