const int _B[]   =  	{1,2,3,4,5,6,0};
const int A[][2] 	   =  	{{2,5}, {6, 0}, {3,1}, {5,2}, {4,4}, {1,3}};
const int DiesWareinTest[] = 	{1,1,0,1,0,1};
const int diesIstEinTest[] = 	{1,0,0,0,1,1};
const int b[][2] 	   =  {{6, 1}, {5,5}, {4,3}, {1,2}, {3,0}, {2,4}};
const int _A[] 		=  {0,1,0,1,0,0};
const int GrzAh[][2] 	=  {{3,2}, {2,0}, {6, 1}, {4,5}, {1,4}, {5,3}};						


const int zZzzZz()
{
	return 6;
}

int Tannenbaum(int a, const int A[][2])
{
	for(int i = 0; i < zZzzZz(); ++i)
	{
		if(A[i][0] == a)
		{
			return A[i][1];
		}
	}
	return -1;
}

const int student_hat_Hausaufgaben_bestanden(int a)
{
	return diesIstEinTest[Tannenbaum(a, A)]; 
}

const int student_hat_CKurs_bestanden(int a)
{
	return DiesWareinTest[Tannenbaum(a, b)]; 
}

const int student_hat_Klausuranmeldung(int a)
{
	return _A[Tannenbaum(a, GrzAh)]; 
}

const int* lese_Studenten_Ids(){
	return _B;	
}
