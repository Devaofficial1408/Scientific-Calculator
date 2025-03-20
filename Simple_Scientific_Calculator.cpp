#include<iostream>
#include <cmath>
#include <vector>

using namespace std;


class variable  
{
    public : 
    
    int n , i1 , j1 , k1 , i2 , j2 ,k2; 
    double x , y ; 
    double a1 , b1 , c1 , a2 , b2 , c2 , a3 , b3, c3; 
    double x1, y1, z1 ; 
        
    float a , b ; 

    float arr[100];
            
    void input_1();
    void input_2();
    void input_3();
    void input_4();
    void input_6();
    void input_7();
    void input_8();
};

//------------------- declare input 1 for mathemetical operation -----------------------------


// created an array for taking the input of n entries 

void variable :: input_1() 
{
    cout<<"                   Number of Entries : ";
    cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
    cout<<"                   Enter Number "<<i+1<<" : ";
    cin>>arr[i];
    } 


}

//------------------- declare input 2 for trigonometry operation -------------------------------

void variable :: input_2() 
{
    
    cout<<"                   Enter the value of X : ";
    cin>>x;
    
}

//------------------- declare input 3 for power operation ----------------------------------------


void variable :: input_3()
{

    cout<<"                   Enter the value of 1st entry : ";
    cin>>a;
    cout<<"                   Enter the value of 2nd entry : ";
    cin>>b;

}

//------------------- declare input 4 for vector operation ----------------------------------------


void variable :: input_4()
{

    cout<<"                Enter the value of i of vector 1 : ";
    cin>>i1;
    cout<<"                Enter the value of j of vector 1 : ";
    cin>>j1;
    cout<<"                Enter the value of k of vector 1 : ";
    cin>>k1;
    cout<<"                Enter the value of i of vector 2 : ";
    cin>>i2;
    cout<<"                Enter the value of j of vector 2 : ";
    cin>>j2;
    cout<<"                Enter the value of k of vector 2 : ";
    cin>>k2;
    

}

//------------------- declare input 6 for quad eq operation ----------------------------------------


void variable :: input_6()

{

    cout<<"                Enter the value of a of the equation : ";
    cin>>x1;
    cout<<"                Enter the value of b of the equation : ";
    cin>>y1;
    cout<<"                Enter the value of c of the equation : ";
    cin>>z1;

}

//------------------- declare input 7 for eq operation ----------------------------------------


void variable :: input_7()

{

    cout<<"                Enter the value of a1 of the equation : ";
    cin>>a1;
    cout<<"                Enter the value of b1 of the equation : ";
    cin>>b1;
    cout<<"                Enter the value of c1 of the equation : ";
    cin>>c1;
    cout<<"                Enter the value of a2 of the equation : ";
    cin>>a2;
    cout<<"                Enter the value of b2 of the equation : ";
    cin>>b2;
    cout<<"                Enter the value of c2 of the equation : ";
    cin>>c2;

}

//------------------- declare input 8 for eq operation ----------------------------------------


void variable :: input_8()

{

    cout<<"                Enter the value of a1 of the equation : ";
    cin>>a1;
    cout<<"                Enter the value of b1 of the equation : ";
    cin>>b1;
    cout<<"                Enter the value of c1 of the equation : ";
    cin>>c1;
    cout<<"                Enter the value of a2 of the equation : ";
    cin>>a2;
    cout<<"                Enter the value of b2 of the equation : ";
    cin>>b2;
    cout<<"                Enter the value of c2 of the equation : ";
    cin>>c2;
    cout<<"                Enter the value of a3 of the equation : ";
    cin>>a3;
    cout<<"                Enter the value of b3 of the equation : ";
    cin>>b3;
    cout<<"                Enter the value of c3 of the equation : ";
    cin>>c3;

}

//***********************************************************************************************
//------------------------------ mathematical operation class -----------------------------------
//***********************************************************************************************

class operator_1 : public variable  

{
public :  ; 

// defining functions for mathematical operation

void base_calc_add();
void base_calc_sub();
void base_calc_multi();
void base_calc_devide();
void base_calc_mod();
void base_calc_per();

};

//------------------------------- addition ---------------------------------------------------------

void operator_1 :: base_calc_add()

{
    float sum = 0;
    cout<<"---------------------------------------------------------"<<endl;   
    cout<<"                                                         "<<endl;   
    cout<<"                       ";
    for(int i = 0 ; i < n ; i ++){
    sum += arr[i];
    }
    cout<<arr[0]; 
    for(int j = 1 ; j < n ; j ++){
    cout<<" + "<<arr[j]; 
    }
    cout<<" = "<<sum<<endl;
    cout<<"                  "<<endl;
    cout<<"---------------------------------------------------------"<<endl;   

}

//------------------------------- subtraction ----------------------------------------------------

void operator_1 :: base_calc_sub()     

{
     float diff = 0;
    cout<<"---------------------------------------------------------"<<endl;   
    cout<<"                                                         "<<endl;   
       float temp = arr[0] - arr[1];
    for(int i = 2 ; i < n ; i ++){
    diff -= arr[i];
    }
    cout<<"                       ";
    cout<<arr[0]; 
    for(int j = 1 ; j < n ; j ++){
    cout<<" - "<<arr[j]; 
    }
    cout<<" = "<<temp + diff<<endl;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;   
}

 //------------------------------- multiplication ----------------------------------------------------


void operator_1 :: base_calc_multi()   

{ 
    float mul = 1;
    cout<<"---------------------------------------------------------"<<endl;   
    cout<<"                                                         "<<endl;   
    cout<<"                       ";
    for(int i = 0 ; i < n ; i ++){
    mul *= arr[i];
    }
    cout<<arr[0]; 
    for(int j = 1 ; j < n ; j ++){
    cout<<" X "<<arr[j]; 
    }
    cout<<" = "<<mul<<endl;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;   
}

//------------------------------- division ----------------------------------------------------

void operator_1 :: base_calc_devide()  

{
    if(n==2)
    {
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;   
    cout<<"                       "<<arr[0]<<" / "<<arr[1]<<" = "<<arr[0]/arr[1]<<endl ;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;  
    } 
    else
    {
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;
    cout<<"                     invalid entry!                      "<<endl;
    cout<<"    (since division is done only for 2 numbers!)         "<<endl;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;
    } 
}

//------------------------------- Modules ----------------------------------------------------


void operator_1 :: base_calc_mod()  

{ 
if(n==2)
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                  "<<arr[0]<<" remainder "<<arr[1]<<" = "<<fmod(arr[0], arr[1])<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
else
{
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;
    cout<<"                 invalid entry!                         "<<endl;
    cout<<"    (since mod is done only for 2 numbers!)              "<<endl;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;
}

//------------------------------- percentage ----------------------------------------------------

}
void operator_1 :: base_calc_per()     

{ 
if
(n==2)
{
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;    
    cout<<"                       "<<arr[0]<<" % "<<arr[1]<<" = "<< (arr[0] / arr[1])*100<<endl; 
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;
}
else
{
    cout<<"---------------------------------------------------------"<<endl;  
    cout<<"                                                         "<<endl;
    cout<<"                     invalid entry!                     "<<endl;
    cout<<"    (since percentage is done only for 2 numbers!)      "<<endl;
    cout<<"                                                         "<<endl;   
    cout<<"---------------------------------------------------------"<<endl;
}
}

//***************************************************************************************
//---------------------------- Trigonometry operation class-------------------------------
//***************************************************************************************

class operator_2 : public variable 

{
    public : 

// defining functions for trigonometry operation

void trigo_calc_sin();
void trigo_calc_cosin();
void trigo_calc_cos();
void trigo_calc_sec();
void trigo_calc_tan();
void trigo_calc_cot();
void trigo_calc_log();


};

//----------------------------------trigonometry angles ---------------------------------------

void operator_2 :: trigo_calc_sin() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       sin("<<x<<") = "<<sin(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_cosin()     
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       cosec("<<x<<") = "<<1/sin(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_cos() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       cos("<<x<<") = "<<cos(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_sec() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       sec("<<x<<") = "<<1/cos(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_tan() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       tan("<<x<<") = "<<tan(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_cot() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       cot("<<x<<") = "<<1/tan(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}
void operator_2 :: trigo_calc_log() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                       log("<<x<<") = "<<log(x)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}


//***********************************************************************************************
//---------------------------------- power operation class --------------------------------------
//***********************************************************************************************

class operator_3 : public variable 

{
public : 

// defining functions for power operation

void pow_calc_1();

};

void operator_3 :: pow_calc_1() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"            power of "<<a<<" to "<<b<<" = "<<pow(a,b)<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

//***************************************************************************************************
//---------------------------- Vector operation class------------------------------------------------
//***************************************************************************************************

class operator_4 : public variable  

{
public :  ; 

// defining functions for vector operation

void vect_calc_add();
void vect_calc_sub();
void vect_calc_dot();
void vect_calc_cross();

};

//---------------------------------- vector algebra ---------------------------------------


void operator_4 :: vect_calc_add() 

{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"        "<<i1<<"i "<<j1<<"j "<<k1<<"k "<<"+ "<<i2<<"i "<<j2<<"j "<<k2<<"k "<<"= "<<i1+i2<<"i "<<j1+j2<<"j "<<k1+k2<<"k "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

void operator_4 :: vect_calc_sub() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"        "<<i1<<"i "<<j1<<"j "<<k1<<"k "<<"- "<<i2<<"i "<<j2<<"j "<<k2<<"k "<<"= "<<i1-i2<<"i "<<j1-j2<<"j "<<k1-k2<<"k "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

void operator_4 :: vect_calc_dot() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"        "<<i1<<"i "<<j1<<"j "<<k1<<"k "<<". "<<i2<<"i "<<j2<<"j "<<k2<<"k "<<"= "<<i1*i2<<"i "<<j1*j2<<"j "<<k1*k2<<"k "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

void operator_4 :: vect_calc_cross() 
{
cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"        "<<i1<<"i "<<j1<<"j "<<k1<<"k "<<"X "<<i2<<"i "<<j2<<"j "<<k2<<"k "<<"= "<<(j1)*(k2) - (k1)*(j2)<<"i "<<(k1)*(i2) - (i1)*(k2)<<"j "<<(i1)*(j2) - (j1)*(i2)<<"k "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}



//***************************************************************************************************
//---------------------------- matrices operation class----------------------------------------------
//***************************************************************************************************

class operator_5 : public variable {
public:
    int rows;
    int cols;
    vector<vector<int>> data;

    operator_5(int r, int c) {
        rows = r;
        cols = c;
        data = vector<vector<int>>(rows, vector<int>(cols));
    }

    void fill() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
        cout <<"      " << "Enter the elements of the Matrix "<< i <<" , "<< j <<" : " ;
                cin >> data[i][j];
            }
        }
    }

    operator_5 operator+(const operator_5& other) const {
        operator_5 result(rows, cols);
        cout<<endl;
       
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    operator_5 operator-(const operator_5& other) const {
        operator_5 result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return result;
    }

    operator_5 operator*(const operator_5& other) const {
        operator_5 result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};



//***************************************************************************************************
//---------------------------- quad eq operation class-----------------------------------------------
//***************************************************************************************************

class operator_6 : public variable 

{
public : 

// defining functions for quadratic eq operation

void que_calc_1();

};

void operator_6 :: que_calc_1() 

{

double determinent =  y1 * y1 - 4 * x1 * z1;

if(determinent < 0 ){



cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                   no real root exist                     "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

else 
{
    double root1 = (-y1 + sqrt(determinent)) / (2 * x1);
    double root2 = (-y1 - sqrt(determinent)) / (2 * x1);

cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"             root 1 of the equation is : "<<root1         <<endl;
cout<<"             root 2 of the equation is : "<<root2         <<endl;   
cout<<"                                                         "<<endl;
cout<<"---------------------------------------------------------"<<endl;
}
}

//***********************************************************************************************
//---------------------------------- var eq operation class -------------------------------------
//***********************************************************************************************


class operator_7 : public variable 
{
public : 

// defining functions for power operation

void var_calc_1();
void var_calc_2();

};

void operator_7 :: var_calc_1() 
{

double determinant = a1 * a2 - b1 * c1;

if (determinant == 0) {

cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                    no solution exist                    "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

double xx = (b2 * a1 - b1 * c2) / determinant;
double yy = (a1 * c2 - b2 * c1) / determinant;

cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"             value x in the equation is : "<<xx           <<endl;
cout<<"             value y in the equation is : "<<yy           <<endl;   
cout<<"                                                         "<<endl;
cout<<"---------------------------------------------------------"<<endl;


}

void operator_7 :: var_calc_2() 
{

double determinant = a1 * b2 * c3 + b2 * c2 * a3 + c1 * a2 * b3 - c1 * b2 * a3 - b2 * a2 * c3 - a1 * c2 * b3;

if (determinant == 0) {

cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"                    no solution exist                    "<<endl;
cout<<"                                                         "<<endl;   
cout<<"---------------------------------------------------------"<<endl; 
}

double xx = (b2 * c3 * a2 + b3 * b1 * c1 + a3 * c2 * a1 - a3 * b1 * c3 - c2 * a2 * c1 - b3 * b2 * a1) / determinant;
double yy = (a1 * c3 * b3 + a2 * a3 * c1 + b1 * c2 * c3 - b1 * a3 * b3 - a1 * a2 * c3 - c1 * c2 * b3) / determinant;
double zz = (a1 * b2 * a3 + b1 * a2 * b3 + c1 * c2 * c3 - c1 * b2 * b1 - a1 * c2 * b3 - a2 * a3 * c3) / determinant;

cout<<"---------------------------------------------------------"<<endl;  
cout<<"                                                         "<<endl;
cout<<"             value x in the equation is : "<<xx           <<endl;
cout<<"             value y in the equation is : "<<yy           <<endl;   
cout<<"             value z in the equation is : "<<zz           <<endl;   
cout<<"                                                         "<<endl;
cout<<"---------------------------------------------------------"<<endl;


}


//***********************************************************************************************
//----------------------------------- main file -------------------------------------------------
//***********************************************************************************************

int main()
{



    string ch1 , ch2 , ch3 , ch4 ,ch5 , ch6 , ch7 ; 
 
do{

// ---------------------------- choice ----------------------------------------------------

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|      <-----Welcome to the scientific calculator----->     |"<<endl;  
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|            <------------type--------------->              |"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|              M --> Mathematical Operations                |"<<endl;        
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|              T --> Trigonometry Operations                |"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|              P --> Power Operations                       |"<<endl;
    cout<<"|                                                           |"<<endl;   
    cout<<"|              V --> Vector Operations                      |"<<endl;
    cout<<"|                                                           |"<<endl;   
    cout<<"|              MA --> Matrix Operations                     |"<<endl;
    cout<<"|                                                           |"<<endl;   
    cout<<"|              Q --> Quadratic equations                    |"<<endl;
    cout<<"|                                                           |"<<endl;   
    cout<<"|              E --> Variable equations                     |"<<endl;
    cout<<"|                                                           |"<<endl;   
    cout<<"-------------------------------------------------------------"<<endl; 
    cout<<"                                                             "<<endl;                              
    cout<<"                enter your choice : ";
    cin>>ch1; 
    cout<<" "<<endl;

//--------------------------------mathematical operations ----------------------------------------

    operator_1 obj1;
    operator_2 obj2;
    operator_3 obj3;
    operator_4 obj4;
    operator_6 obj6;
    operator_7 obj7;

if(ch1 == "M" || ch1 == "m")
    {
        obj1.input_1();
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;      
    cout<<"|        <-----------------type------------------->         |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (addition)          + -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (multiplication)    * -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (subtraction)       - -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (division)          / -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (remainder)         : -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (percentage)        % -->                  |"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"-------------------------------------------------------------"<<endl;   
    cout<<"                                                             "<<endl;   
    cout<<"                   enter your choice : ";
    cin>>ch2;
    if(ch2 == "+" ) { obj1.base_calc_add(); }
    else if(ch2 == "-") { obj1.base_calc_sub(); }
    else if(ch2 == "*") { obj1.base_calc_multi();}
    else if(ch2 == "/") { obj1.base_calc_devide(); }
    else if(ch2 == ":" ) { obj1.base_calc_mod(); }
    else if(ch2 == "%") { obj1.base_calc_per(); }
    else
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ----------------->       |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}
    }

//--------------------------------Trigonometry operations ----------------------------------------

    
else if(ch1 == "T" ||ch1 == "t")
    {
    obj2.input_2();
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|             <-------------type--------------->            |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        S  -->  Sin                        |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        C  -->  Cos                        |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        T  -->  Tan                        |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        CS -->  cosec                      |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        SC -->  Sec                        |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        CO -->  Cot                        |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                        L  -->  Ln                         |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"-------------------------------------------------------------"<<endl;                               
    cout<<"                                                             "<<endl;   
    cout<<"                 enter your choice : ";
    cin>>ch3;
    if(ch3 == "S" ||ch3 == "s")   { obj2.trigo_calc_sin(); }
    else if(ch3 == "C" || ch3 == "c" )   { obj2.trigo_calc_cos(); }
    else if(ch3 == "T" || ch3 == "t")   { obj2.trigo_calc_tan();}
    else if(ch3 == "CS" || ch3 == "cs")  { obj2.trigo_calc_cosin(); }
    else if(ch3 == "SC" || ch3 == "sc" ) { obj2.trigo_calc_sec(); }
    else if(ch3 == "CO" || ch3 == "co" )  { obj2.trigo_calc_cot(); }
    else if(ch3 == "L" || ch3 == "l")   { obj2.trigo_calc_log(); }
    else
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ---------------->        |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

}
    }

//-------------------------------- power operations -------------------------------------------


else if(ch1 == "P" || ch1 == "p")
    {
    obj3.input_3();
    obj3.pow_calc_1();
    }

//-------------------------------- vector operations -------------------------------------------


else if(ch1 == "V" ||ch1 == "v")
    {
        obj4.input_4();
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;      
    cout<<"|        <-----------------type------------------->         |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (addition)         + -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (subtraction)      - -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (dot product)      . -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (cross product)    X -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (Vector angle)     Q -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"|                (modulus)          : -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;                                  
    cout<<"-------------------------------------------------------------"<<endl;   
    cout<<"                                                             "<<endl;   
    cout<<"                   enter your choice : ";
    cin>>ch5;
    if(ch5 == "+") { obj4.vect_calc_add(); }
    else if(ch5 == "-") { obj4.vect_calc_sub(); }
    else if(ch5 == ".") { obj4.vect_calc_dot(); }
    else if(ch5 == "X" || ch5 == "x") { obj4.vect_calc_cross(); }
    else
    {
    cout<<"                                                             "<<endl;
    cout<<"                                                             "<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ----------------->       |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}
    }

//-------------------------------- matrices operations -------------------------------------------

else if(ch1 == "MA" || ch1 == "ma")
{
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;      
    cout<<"|        <-----------------type------------------->         |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (addition)         + -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (subtraction)      - -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (product)          X -->                   |"<<endl;
    cout<<"|                                                           |"<<endl;                                                               
    cout<<"-------------------------------------------------------------"<<endl;   
    cout<<"                                                             "<<endl;   
    cout<<"                   enter your choice : ";
    cin>>ch6;

int rows, cols;
    cout<<endl;
    cout <<"      "<<" Enter the number of rows of the matrices : ";
    cin >> rows;
    cout<<endl;
    cout <<"      "<< "Enter the number of columns of the matrices : ";
    cin >> cols;
    cout<<endl;
    operator_5 a(rows, cols);
    a.fill();
    cout<<endl;
    operator_5 b(rows, cols);
    b.fill();

    operator_5 sum = a + b;
    operator_5 diff = a - b;
    operator_5 prod = a * b;
if(ch6 == "+"){
    cout << "The result of the Matrix addition is : " << endl;
    sum.print();
}
else if(ch6 == "-"){
    cout << "The result of the Matrix subtraction is : " << endl;
    diff.print();
}
else if(ch6 == "X" ||ch6 == "x" ){
    cout << "The result of the Matrix multiplication is : " << endl;
    prod.print();
}
else
    {
    cout<<"                                                             "<<endl;
    cout<<"                                                             "<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ----------------->       |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}

}

//-------------------------------- quadratic operations -------------------------------------------


else if(ch1 == "Q" || ch1 == "q")
    {
    obj6.input_6();
    obj6.que_calc_1();
    }

//-------------------------------- variable operations -------------------------------------------


else if(ch1 == "E" || ch1 == "e")
    {
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                           |"<<endl;      
    cout<<"|        <-----------------type------------------->         |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (2 variable)         2 -->                 |"<<endl;
    cout<<"|                                                           |"<<endl;  
    cout<<"|                (3 variable)         3 -->                 |"<<endl;
    cout<<"|                                                           |"<<endl;                                 
    cout<<"-------------------------------------------------------------"<<endl;   
    cout<<"                                                             "<<endl;   
    cout<<"                   enter your choice : ";
    cin>>ch7;
     if(ch7 == "2") 
    {
        obj7.input_7();
        obj7.var_calc_1(); 
    }
    else if(ch7 == "3") 
    { 
        obj7.input_8();
        obj7.var_calc_2(); 
    }

else
    {
    cout<<"                                                             "<<endl;
    cout<<"                                                             "<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ----------------->       |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}


}




//------------------------------------ else case ------------------------------------------------

else {
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|      <------------- invalid entry ---------------->        |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

}
cout<<"                                                  "<<endl;
cout<<"                 Do you want to continue? (Y/N) : ";

    cin>>ch4;
cout<<"                                                    "<<endl;
} while ( ch4 == "Y" || ch4 == "y" );


    return 0;
}