//Gibt ein unveränderliches Array der StudentenIds zurück, die bei dem Kurs angemeldet sind.
//StudendenIds sind ganze Zahlen größer 0. Das Ende des Arrays wird analog zu Strings durch den Eintrag 0 kenntlich gemacht.
const int* lese_Studenten_Ids();

//Gibt 1 zurück, falls der Student mit der Id studenId die Hausaufgabenvorleistung geschafft hat. 
//Ansonsten wird 0 zurückgegeben.
const int student_hat_Hausaufgaben_bestanden(int studentId);

//Gibt 1 zurück, falls der Student mit der Id studentId den C-Kurs bestanden hat.
//Ansonsten wird 0 zurückgegeben.
const int student_hat_CKurs_bestanden(int studentId);

//Gibt 1 zurück, falls sich der Student mit der Id studentId zur Klausur angemeldet hat.
//Ansonsten wird 0 zurückgegben.
const int student_hat_Klausuranmeldung(int studentId);

