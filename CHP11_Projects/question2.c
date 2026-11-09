#include <stdio.h>

void find_closest_flight(int desired_time,int *departure_time, int *arrival_time){

    int departTime[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arriveTime[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int difference = desired_time - departTime[0];


    for(int i =0; i < 8;i++){
        int temp = departTime[i];
        if(difference > desired_time - departTime[i]){
            difference = desired_time - departTime[i];
            *departure_time = departTime[i];
            *arrival_time = arrival_time[i];
        }

    }

}

int main(){

    
    int desired_time, departure_time, arrival_time;
    printf("Enter time in minutes since midnight: ");
    scanf("%d",&desired_time);

    find_closest_flight(desired_time,&departure_time,&arrival_time);
    printf("Departure time: %d \n", departure_time);
    printf("Arrival time: %d \n", arrival_time);


    return 0;
}

