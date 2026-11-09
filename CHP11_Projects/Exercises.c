#include <stdio.h>

void swap(int*p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec){

    *hr = total_sec / 3600;
    int remainder = total_sec % 3600;
    *min = remainder / 60;
    remainder = remainder % 60;
    *sec = remainder;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    *largest = 1;
    *second_largest = 0;
    for(int i =0; i < n; i++){
        if(a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        }else if (a[i] <= *largest && a[i] > *second_largest){
            *second_largest = a[i];
        }
    }
}

void split_date(int day_of_year, int year, int *month, int *day){
    int i = 0;
    int days[] = {31, 28, 31, 30, 31, 30,
              31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days[1] = 29;
    }
    int currentDay = days[i];
    
    while(day_of_year > currentDay ){
        currentDay = days[i];
        day_of_year -= days[i];
        i++;
    }
    *month = i+1;
    *day = day_of_year;

}

int *find_largest(int a[], int n){

    int *p = &a[0];
    for(int i =0; i < n; i++){
        if(a[i] > *p){
            *p = &a[i];

        }
    }

    return p;
}



int main(){

    /* 
    int p = 5;
    int q = 7;
    printf("initial value of P is %d and initial value of Q is %d\n",p,q);
    swap(&p,&q);
    printf("after swap the value of P is %d and the value of q is %d\n",p,q);
    */

    /*
    int total_seconds = 7450;
    int hour,min,sec;
    split_time(total_seconds,&hour,&min,&sec);
    printf("Time elapsed since midnight is is %d hours %d minutes and %d seconds\n", hour,min,sec);
    */

    /* 
    int a[5] = {21,33,43,17,10};
    int n = 5;
    int largest;
    int second_largest;
    find_two_largest(a,n,&largest,&second_largest);
    printf("largest : %d \nsecond largest : %d \n", largest,second_largest);
    */

    /*
    int a[5] = {21,33,43,17,10};
    int n = 5
    printf("%d\n", *find_largest(a, n)); // Output: 43
    */
    
    return 0;
}