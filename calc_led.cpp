// calc_led.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "calc_led.h"

using namespace std;

void main2() {


	static char cmdarg[1024] = {};

	float v_led = .0f; // vd LEDにかかる電圧
	float i_led = .0f;
	float den_v = .0f;
	float resistor = .0f;
	float resistor_hosei = .0f;
	float resistor_watt = .0f;

	printf("電源[V] VF[V] IF[mA] ResistorHosei?\n> ");

	fgets(cmdarg, sizeof(cmdarg), stdin);
	if(sscanf(cmdarg, "%f %f %f %f", &den_v, &v_led , &i_led, &resistor_hosei) == EOF) return;

	i_led /= 1000.0f;
	resistor = (den_v - v_led) / i_led;
	resistor *= resistor_hosei;
	resistor_watt = i_led * i_led * resistor;
	printf("抵抗値: %f W=%f\n", resistor, resistor_watt);

}

void mainn() {


	static char cmdarg[1024] = {};

	float v_led = .0f; // vd LEDにかかる電圧
	float i_led = .0f;
	float den_v = .0f;
	float resistor = .0f;
	float resistor_watt = .0f;

	printf("電源[V] VF[V] IF[mA]?\n> ");

	fgets(cmdarg, sizeof(cmdarg), stdin);
	if (sscanf(cmdarg, "%f %f %f %f", &den_v, &v_led, &i_led) == EOF) return;

	i_led /= 1000.0f;
	resistor = (den_v - v_led) / i_led;
	resistor_watt = i_led * i_led * resistor;
	printf("抵抗値: %f W=%f\n", resistor, resistor_watt);

}

int main(int argc, char* argv[])
{
	mainn();

	return 0;
}