

const float cx=2; //coxa
const float fm=6.2; //femur
const float tb=8.3; // tibia
float L, L1;
float alpha, alpha1,alpha2,beta,gama;
void setup()
{
 Serial.begin(9600); 
}
void loop()
{
trigono_xyz(2, 4, 6); //contoh x,y,z
Serial.print("gama= ");
Serial.print(gama);
Serial.print(", alpha= ");
Serial.print(alpha);
Serial.print(", beta= ");
Serial.print(beta);
Serial.println();
}

void trigono_xyz(float x, float y, float z)
{
 L1=sqrt(sq(x)+sq(y));
 gama=atan(x/y)/PI*180;
 L=sqrt(sq(L1-cx)+sq(z));
 beta=acos((sq(tb)+sq(fm)-sq(L))/(2*tb*fm))/PI*180;
 alpha1=acos(z/L)/PI*180;
 alpha2=acos((sq(fm)+sq(L)-sq(tb))/(2*fm*L))/PI*180;
 alpha=alpha1+alpha2;
}
