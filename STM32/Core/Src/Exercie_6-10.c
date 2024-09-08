/*
 * Exercie_6-10.c
 *
 *  Created on: Sep 7, 2024
 *      Author: LENOVO
 */
#include "Exercise_6-10.h"

int second=0;
int minute=0;
int hour=0;

void init_exercises(){
	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
    HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
    HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
    HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
}
void clearAllClock(){
	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
}
void  setNumberOnClock(int num){
	switch(num){
	  case 0:
		  HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
		  break;
	}
}
void clearNumberOnClock(int num){
	switch(num){
	  case 0:
		  HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	 	  break;
	  case 6:
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		  break;
	 }
}
void exercise10(){
	second++;
    if(second>=60){
    	second=0;
    	minute++;
    }
	if(minute>=60){
		minute=0;
		hour++;
	}
	if(hour>=12){
		hour=0;
	}
	clearAllClock();
	setNumberOnClock(second/5);
    setNumberOnClock(minute/5);
	setNumberOnClock(hour);
}


