#include <iostream>
using namespace std;
//                                                                             INTRODUCTION
// IN VIT THERE ARE MANY GYMS FOR BOTH MALE AND FEMALE TRYING TO FIND THE RIGHT TIME TO GO IS ALWAYS A PROBLEM THAT CAN HAMPER GAINS MADE BY A PERSON.
// THIS PROGRAM WILL HELP YOU GIVE A RATING OUT OF 10
// THE HIGHER THE RATING THE BETTER IT IS
// CHEST AND TRICEP MORNING
//SPECIAL THANKS TO HEAD COMMITEE FOR REVIEWING OUR PROGRAM AND GIVING US A CHANCE TO SHOW,UPGRADE AND LEARN OUR SKILL
//LET THE CHEFF COOK
//                                                                              SOURCE CODE 
int chest() {
    cout << "You have chosen chest and tricep for your excercise today \n Please select the timing as belows:" << endl;
    cout << "1. 6 AM TO 8 AM" << endl;
    cout << "2. 8 AM to 9 AM\n (1/2)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float chest_press = 4 , inclined_chest_press = 2 , flys = 4 , pull_down = 1;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 6AM is:  " << final_rating_ts1 << " out of 10"  << endl;
    }
    else if (time_slot == 2) {
        float chest_press = 6 , inclined_chest_press = 4 , flys = 5 , pull_down = 1;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 8AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else {
        cout << "Wrong option has been choosen \n Please choose again" << endl;
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------
// BACK AND BICEP MORNING
int back() {
    cout << "You have chosen back and bicep for your excercise today \n Please select the timing as belows:" << endl;
    cout << "1. 6 AM TO 8 AM" << endl;
    cout << "2. 8 AM to 9 AM\n (1/2)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float lat_pulldown = 4 , T_bar = 2 , bicep_curls = 2 , pull_ups = 1 , seated_rows = 4;
        float rating_timeslot_1;
        rating_timeslot_1 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" <<  endl;
    }
    else if (time_slot == 2) {
        float lat_pulldown = 7 , T_bar = 4 , bicep_curls = 3 , pull_ups = 1 , seated_rows = 9;
        float rating_timeslot_2;
        rating_timeslot_2 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else {
        cout << "Wrong option has been choosen \n Please choose again" << endl;
        back();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------
// LEG DAY MORNING
int legs() {
    cout << "You have chosen legs for your excercise today \n Please select the timing as belows:  " << endl;
    cout << "1. 6 AM TO 8 AM" << endl;
    cout << "2. 8 AM to 9 AM\n (1/2)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float leg_press = 4 , squats = 2 , leg_extension = 2 , leg_curls = 1 , lunges  = 4 , bss = 1;
        float rating_timeslot_1;
        rating_timeslot_1 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 2) {
        float leg_press = 4 , squats = 2 , leg_extension = 2 , leg_curls = 1 , lunges  = 4 , bss = 1;
        float rating_timeslot_2;
        rating_timeslot_2 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else{
        cout << "Wrong options has been chosen \n Please choose again" << endl;
        legs();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------
// CHEST AND TRICEP (PUSH) EVENING
int chest2() {
    cout << "You have chosen chest and tricep for your excercise today \n Please select the timing as belows:" << endl;
    cout << "1. 3 PM to 4 PM" << endl;
    cout << "2. 4 PM to 5 PM\n3. 5 PM to 6PM \n4. 6 PM to 7 PM \n5. 7 PM to 8PM (1/2/3/4/5)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float chest_press = 4 , inclined_chest_press = 2 , flys = 4 , pull_down = 1;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 2) {
        float chest_press = 5 , inclined_chest_press = 2 , flys = 5 , pull_down = 2;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 3) {
        float chest_press = 6 , inclined_chest_press = 4 , flys = 6 , pull_down = 3;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 4) {
        float chest_press = 7 , inclined_chest_press = 5 , flys = 6 , pull_down = 5;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 5) {
        float chest_press = 10 , inclined_chest_press = 9 , flys = 10 , pull_down = 10;
        float rating_timeslot_1;
        rating_timeslot_1 = (chest_press + inclined_chest_press + flys + pull_down)/(4);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing chest and tricep at 8AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else {
        cout << "Wrong open choosen \n Please choose again" << endl;
        chest2();
    }
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
// BACK AND BICEP (PULL) EVENING
int back2() {
    cout << "You have chosen back and bicep for your excercise today \n Please select the timing as belows:" << endl;
    cout << "1. 3 PM to 4 PM" << endl;
    cout << "2. 4 PM to 5 PM\n3. 5 PM to 6PM \n4. 6 PM to 7 PM \n5. 7 PM to 8PM (1/2/3/4/5)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float lat_pulldown = 4 , T_bar = 2 , bicep_curls = 2 , pull_ups = 1 , seated_rows = 4;
        float rating_timeslot_1;
        rating_timeslot_1 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 2) {
        float lat_pulldown = 7 , T_bar = 4 , bicep_curls = 3 , pull_ups = 1 , seated_rows = 9;
        float rating_timeslot_2;
        rating_timeslot_2 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else if (time_slot == 3) {
        float lat_pulldown = 7 , T_bar = 6 , bicep_curls = 5 , pull_ups = 3 , seated_rows = 9;
        float rating_timeslot_1;
        rating_timeslot_1 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 4) {
        float lat_pulldown = 8 , T_bar = 7 , bicep_curls = 5 , pull_ups = 4 , seated_rows = 10;
        float rating_timeslot_1;
        rating_timeslot_1 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 5) {
        float lat_pulldown = 10 , T_bar = 6 , bicep_curls = 5 , pull_ups = 6 , seated_rows = 10;
        float rating_timeslot_1;
        rating_timeslot_1 = (lat_pulldown + T_bar + bicep_curls + pull_ups + seated_rows)/(5);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 6AM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else {
        cout << "Wrong option has been choosen \n Please choose again" << endl;
        back2();
    }
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
// LEG DAY EVENING 
int legs2() {
    cout << "You have chosen legs for your excercise today \n Please select the timing as belows:  " << endl;
    cout << "1. 3 PM to 4 PM" << endl;
    cout << "2. 4 PM to 5 PM\n3. 5 PM to 6PM \n4. 6 PM to 7 PM \n5. 7 PM to 8PM (1/2/3/4/5)" << endl;
    int time_slot;
    cin >> time_slot;
    if (time_slot == 1) {
        float leg_press = 4 , squats = 2 , leg_extension = 2 , leg_curls = 1 , lunges  = 4 , bss = 1;
        float rating_timeslot_1;
        rating_timeslot_1 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts1 = 10 - rating_timeslot_1;
        cout << "The rating for doing back and bicep at 3PM TO 4PM is:  " << final_rating_ts1 << " out of 10" << endl;
    }
    else if (time_slot == 2) {
        float leg_press = 4 , squats = 2 , leg_extension = 2 , leg_curls = 1 , lunges  = 4 , bss = 1;
        float rating_timeslot_2;
        rating_timeslot_2 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 4PM to 5PM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else if (time_slot == 3) {
        float leg_press = 6 , squats = 5 , leg_extension = 5 , leg_curls = 5 , lunges  = 4 , bss = 2;
        float rating_timeslot_2;
        rating_timeslot_2 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 5PM to 6PM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else if (time_slot == 4) {
        float leg_press = 7 , squats = 6 , leg_extension = 6 , leg_curls = 7 , lunges  = 6 , bss = 3;
        float rating_timeslot_2;
        rating_timeslot_2 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 6PM to 7PM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else if (time_slot == 5) {
        float leg_press = 7 , squats = 9 , leg_extension = 8 , leg_curls = 8 , lunges  = 6 , bss = 4;
        float rating_timeslot_2;
        rating_timeslot_2 = (leg_press + squats + leg_extension + leg_curls + lunges + bss)/(6);
        float final_rating_ts2 = 10 - rating_timeslot_2;
        cout << "The rating for doing back and bicep at 7PM to 8PM is:  " << final_rating_ts2 << " out of 10" << endl;
    }
    else{
        cout << "Wrong options has been chosen \n Please choose again" << endl;
        legs2();
    }
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------
//THE MAIN FUNCTION IS BELOW
int main(){
    cout << "Welcome to the gym time rating system" << endl;
    cout << "Please tell us when are you planning to go the gym? \nMorning or Evening (1/2)" << endl;
    int Time_day;
    cin >> Time_day;
    if (Time_day == 1) { 
        cout << "You have chosen morning as your gym time slot!" << endl;
        cout << "Please select what workout are you planning to do \n 1.Chest + Tricep (Push) \n 2. Back + Bicep (Pull) \n 3. Legs" << endl;
        int workout_option;
        cin >> workout_option; //USER INPUTS TYPE OF WORKOUT
        if (workout_option == 1) {
            chest();
        }
        else if (workout_option == 2) {
            back();
        }
        else{
            legs();
        }

    }
    else { 
        cout << "You have chosen evening as your gym time slot!" << endl;
        cout << "Please select what workout are you planning to do \n 1.Chest + Tricep (Push) \n 2. Back + Bicep (Pull) \n 3. Legs" << endl;
        int workout_option;
        cin >> workout_option; //USER INPUTS TYPE OF WORKOUT
        if (workout_option == 1) {
            chest2();
        }
        else if (workout_option == 2) {
            back2();
        }
        else{
            legs2();
        }
    }

}

