#include <stdio.h>

int main(){

    int departTime[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arriveTime[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hr,min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hr,&min);
    hr *= 60;
    int closest_time = hr + min;
    int diff = 0;
    int i = 0;
    int current_diff = 2000;
    int lowest_index = 0;
    while(i<8){
        diff = departTime[i] - closest_time;
        if(diff < 0){
            diff = -diff;
        }
        if(current_diff > diff){
            current_diff = diff;
            lowest_index = i;
        }
        i++;
        
    }
    hr = departTime[lowest_index] / 60;
    min = departTime[lowest_index] % 60;
    int arriveHr = arriveTime[lowest_index] / 60;
    int arriveMin = arriveTime[lowest_index] % 60;
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

    if(departTime[lowest_index] > 720 && arriveTime[lowest_index] > 720){

        printf("Closest departure time is %02d:%02d p.m , arriving at %02d:%02d p.m \n",hr,min,arriveHr,arriveMin);

    }else if (departTime[lowest_index] > 720 && arriveTime[lowest_index] <= 720){
        printf("Closest departure time is %02d:%02d p.m , arriving at %02d:%02d a.m \n",hr,min,arriveHr,arriveMin);
    }else if (departTime[lowest_index] <= 720 && arriveTime[lowest_index] <= 720){
        printf("Closest departure time is %02d:%02d a.m , arriving at %02d:%02d a.m \n",hr,min,arriveHr,arriveMin);
    }else{
        printf("Closest departure time is %02d:%02d a.m , arriving at %02d:%02d p.m \n",hr,min,arriveHr,arriveMin);
    }
    
    return 0;

}