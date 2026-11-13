#include <stdio.h>

void find_closest_flight(int desired_time,int *departure_time, int *arrival_time){

    int departTime[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arriveTime[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int curr_difference = 2000;
    int difference = 0;
    for(int i =0; i < 8;i++){
        difference = desired_time - departTime[i];
        if(difference < 0){
            difference = -difference;
        }
        if(curr_difference > difference){
            curr_difference = difference;
            *departure_time = departTime[i];
            *arrival_time = arriveTime[i];
        }
    }
}

int main(){

    
    int desired_time, departure_time, arrival_time;
    int hr,min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hr,&min);
    desired_time = hr*60 + min;
    find_closest_flight(desired_time,&departure_time,&arrival_time);
    hr = departure_time / 60;
    min = departure_time % 60;
    int arriveHr = arrival_time / 60;
    int arriveMin = arrival_time % 60;
    if (hr > 12) {
        hr = hr - 12;
    }else if(hr == 0){
        hr = 12;
    }
    if(arriveHr > 12){
        arriveHr = arriveHr - 12;
    }else if ( arriveHr == 0){
        arriveHr = 12;
    }
    if( departure_time> 720 &&  arrival_time> 720){
        printf("Closest departure time is %02d:%02d p.m , arriving at %02d:%02d p.m \n",hr,min,arriveHr,arriveMin);
    }else if (departure_time > 720 && arrival_time <= 720){
        printf("Closest departure time is %02d:%02d p.m , arriving at %02d:%02d a.m \n",hr,min,arriveHr,arriveMin);
    }else if (departure_time <= 720 && arrival_time > 720){
        printf("Closest departure time is %02d:%02d a.m , arriving at %02d:%02d p.m \n",hr,min,arriveHr,arriveMin);
    }else{
        printf("Closest departure time is %02d:%02d a.m , arriving at %02d:%02d a.m \n",hr,min,arriveHr,arriveMin);
    }


    return 0;
}

