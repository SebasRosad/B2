# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;
int  principal ()
{
	flotante HEPV_x, HEPV_s= 0 , HEPV_s1= 0 , HEPV_s5= 0 ;
	int HEPV_i= 0 ,HEPV_l,HEPV_i1= 0 ,HEPV_i5= 0 ;
	cout<< " Ingreso 2: " ;cin>>HEPV_l;
	hacer {

	cout<< " Ingreso x: " ;cin>>HEPV_x;
	HEPV_i=HEPV_i+ 2 ;
	HEPV_s=HEPV_s+HEPV_x;
	si (HEPV_x== 2 ){
		HEPV_i1=HEPV_i1+ 2 ;
		HEPV_s1=HEPV_s1+HEPV_x;
	} más {

		HEPV_i5=HEPV_i5+ 2 ;
		HEPV_s5=HEPV_s5+HEPV_x;
	}

	} mientras (HEPV_i<HEPV_l);
	cout<< " La cantidad de monedas es: " <<HEPV_i<<endl;
	cout<< " El valor es: " <<HEPV_s<<endl;


	cout<< " La cantidad de monedas de 2$ es: " <<HEPV_i1<<endl;
	cout<< " El valor es: " <<HEPV_s1<<endl;

	cout<< " La cantidad de monedas de 50ctvs es: " <<HEPV_i5<<endl;
	cout<< " La cantidad de moneda es: " <<HEPV_s5<<endl;
	devolver  0 ;
}

