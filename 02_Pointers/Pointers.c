#include <stdio.h>
#include <stdint.h>

void accumulate(int64_t* sum, int64_t* num, int64_t value)
{
	*sum += value;
	(*num)++;
}

int main()
{
	int64_t sum = 0;// Sum of all vaulues
	int64_t num = 0;// number of sums
	
	accumulate(&sum, &num, 10);
	accumulate(&sum, &num, 20);

	

	int64_t avg = sum / num;
	printf("The average is: %lli", avg);
	
}
/*
(1) Pointer types:
	<type>*		int64_t*
(2) Modify the value:
	*<var> = ...
	int64_t* p = ...
	*p = 5;
	 
(3) Creating pointer
	int64_t value = 0;
	int64_t* p =&value;
	*p = 5;
	
	*/