#include<stdio.h>
enum partners{
	Pramodsir,
	Shri,
	Sachin,
	Akshay,
	Swapnil,
	Rutik
};
enum RILcompanies{
	KBR_Investments = 6,
	AKR_Holdings,
	Rokade_Enterprises,
	Rokade_International,
	Rokade_Reality,
	Roakde_Retail
}obj1;
enum RILcontries{
	India,
	USA,
	UAE,
	UK,
	Israil,
	Russia,
	Japan,
	China,
	Singapore,
	Malesiya,
	Australia,
	Canada,
	Katar = 20,
	Germany,
	NorthKorea,
	ShriLanka,
	SouthAfrica,
	CentralAfrica,
	Brazil,
	Italy,
	Bankok,
	Bangladesh,
	Viyatnam,
	France,
	Ukrain,
	Iran,
	Jorden
}obj2;
void main(){
	enum partners obj;
	printf("%ld\n",sizeof(obj));
	printf("%ld\n", sizeof(obj1));
        printf("%ld\n", sizeof(obj2));

	printf("%d\n", Pramodsir);
	printf("%d\n", Rutik);

	printf("\n%d\n", KBR_Investments);
        printf("%d\n", Rokade_Reality);
	
	printf("\n%d\n", Canada);
        printf("%d\n", Germany);
	printf("%d\n", Jorden);

}
