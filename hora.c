﻿#include "hora_do_sistema.h"
#include <stdio.h>
#include <time.h>
int main(){
	time_t datah;
	/*datah variavel que recebe o retorno da funcao data_atual*/
	datah=data_atual();
	printf(datah);
	
}
