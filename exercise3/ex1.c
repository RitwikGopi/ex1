#include <stdio.h>
#include <time.h>


int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low+high)/2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			/* found match */
			return mid;
	}
	return -1;
	/* no match */
}

int binsearch_(int x, int v[], int n)
{
	int low, high, mid;
	double time=0;
	low = 0;
	high = n - 1;
	while (low <= high && x!=v[mid]) {
		mid = (low + high)/2;
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid +1;
	}
	if (x == v[mid])
		return mid;
	else
		return -1;
	/* no match */
}

main(){
	int lim = 32767;
	int ar[lim],xx,i;
	double time1=0,time2=0;
	//scanf("%d",&xx);
	for( i = 0; i < lim; ar[i]=i,i++);
	int p;
	for(xx=0;xx<lim;xx++){
	clock_t t;
	t = clock();
	p = binsearch(xx,ar,lim);
	t = clock()-t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	time1+=time_taken;
	printf("Function1's answer is ' %d ' in %f seconds\n", p, time_taken);
	t = clock();
	p = binsearch_(xx,ar,lim);
	t = clock()-t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	time2+=time_taken;
	printf("Function2's answer is ' %d ' in %f seconds\n\n", p, time_taken);
	}
	printf("Total time by f1 '%f' f2 '%f'\n",time1,time2);
}
