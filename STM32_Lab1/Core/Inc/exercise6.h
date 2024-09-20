int count = 0;

void test(){
	count++;
	if (count >=13 ) count = 1;
	switch (count){
		case 1:
			HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
		break;
		case 2:
					HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
				break;
		case 3:
					HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
				break;
		case 4:
					HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
				break;
		case 5:
					HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
				break;
		case 6:
					HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
				break;
		case 7:
					HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
				break;
		case 8:
					HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
				break;
		case 9:
					HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
				break;
		case 10:
					HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
				break;
		case 11:
					HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
				break;
		case 12:
					HAL_GPIO_TogglePin(LED_12_GPIO_Port, LED_12_Pin);
				break;
	}
}
