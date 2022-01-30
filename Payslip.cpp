#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Payslip {
private:
    string name;

    int salary, OThours, OTpay;
    

public:
    string validation;
    void display () {
    cout << "\n******************************************************";
    cout << "\n--------------- INPUT VALIDATIONS --------------------";
    cout << "\na. Basic salary should not be less than Php 10,000.00";
    cout << "\nb. Minimum overtime hours is hour.";
    cout << "\n******************************************************\n";
    cout << "\n";
    cout << "\n*******************************************************";
    cout << "\n--------------- Basic Salary Details ------------------";
    cout << "\n  Pay Grade A   |  Pay Grade B     |     Tax Rate   |";
    cout << "\n     10,000     |     15,000       |        10%     |";
    cout << "\n     20,000     |     25,000       |        15%     |";
    cout << "\n     30,000     |     35,000       |        20%     |";
    cout << "\n     40,000     |     45,000       |        25%     |";
    cout << "\n     50,000     |     55,000       |        30%     |";
    cout << "\n-------------------------------------------------------";
    cout << "\n Note: Basic salary greater than or equal to 55,000";
    cout << "\n will have a pay Grade of B and tax rate of 30%\n";
    cout << "\n";

    }
    void setName (string n)
    {
       name = n;
    }
    string getName ()
    {
        return name;
    }

    void setSalary (int s)
    {
        if(s >= 10000 && s <= 14999)
        {
            cout << "Pay grade: A\n";
            cout << "Tax rate: 10%\n";  
        }
        else if(s >= 15000 && s <= 19999)
        {
            cout << "Pay grade: B\n";
            cout << "Tax rate: 10%\n";  
        }
        else if (s >= 20000 && s <= 24999)
        {
            cout << "Pay grade: A\n";
            cout << "Tax rate: 15%\n";  
        }
        else if (s >= 25000 && s <= 29999)
        {
            cout << "Pay grade: B\n";
            cout << "Tax rate: 15%\n";  
        }
        else if (s >= 30000 && s <= 34999)
        {
            cout << "Pay grade: A\n";
            cout << "Tax rate: 20%\n";  
        }
        else if (s >= 35000 && s <= 39999)
        {
            cout << "Pay grade: B\n";
            cout << "Tax rate: 20%\n";  
        }
        else if (s >= 40000 && s <= 44999)
        {
            cout << "Pay grade: A\n";
            cout << "Tax rate: 25%\n";  
        }
        else if (s >= 45000 && s <= 49999)
        {
            cout << "Pay grade: B\n";
            cout << "Tax rate: 25%\n";  
        }
        else if (s >= 50000 && s <= 54999)
        {
            cout << "Pay grade: A\n";
            cout << "Tax rate: 30%\n";  
        }
        else if (s >= 55000)
        {
            cout << "Pay grade: B\n";
            cout << "Tax rate: 30%\n";  
        }
        else
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
    
    void setOThours (int oth)
    {
        OThours = oth;
    }
    int getOThours()
    {
        return OThours;
    }
    void calculate()
    {
    double Gross, Whtax, FV, percent, oTp, oTh, saLary, otP, GRoss, grosS, rate, wHTax, Net;
    
    cout << "\n** Compute the Overtime Pay **\n";
    cout << "Enter the 1% ( of Basic Salary): ";
    cin >> percent;
    cout << " OT hours : ";
    cin >> oTh;
               oTp = (percent * oTh);
    cout << " Overtime pay: " << "Php" << oTp << ".00\n";
             

    cout << "\n** Compute the gross pay **\n";
    cout << "Enter Basic Salary: ";
    cin >> saLary;
    cout << "Enter OT pay: ";
    cin >> otP;
              GRoss = (saLary + otP);
    cout << "Total gross pay: " << "Php" << GRoss << ".00\n";

    cout << "\n ** Compute Withholding tax **\n";
    cout << "Enter Gross pay: ";
    cin >> grosS;
    cout << "Enter corresponding tax rate (in decimal form): ";
    cin >> rate;
              wHTax = grosS * rate;
    cout << " Withholding tax :" << "Php" << wHTax << ".00\n";

    cout << "\n** Compute the NETPAY **\n";
    cout << "\n--------------------------";
    cout << "\nTake note of the fixed values: ";
    cout << "\n SSS = Php 500.00";
    cout << "\n Pag-ibig = Php 200.00";
    cout << "\n Philhealth = Php 100.00\n";
    cout << "\n Total      = Php 800.00";
    cout << "\n--------------------------\n";
    cout << "\nEnter gross pay: ";
    cin >> Gross, 
    cout << "\nEnter WitholdingTax :  ";
    cin >> Whtax;
    cout << "\nEnter total fixed value: ";
    cin >> FV;
             Net = (Gross - Whtax - FV);
    cout << "\nTotal Netpay:" << "Php" << Net << ".00\n";
    }  
};

class Employee {
    public:
    // Inputs will be in string form so they can be separated by a comma
     //since this is just for the ouput purposes not computation//
        string name, grade, s, otH, otP, Gross, whT, Net;    
        
    void output()
    {
        cin.ignore(); //so the program will read the getline command //
        cout << "\nRe-enter the previous information for final output.";

        cout << "\nEnter employee name: ";
        getline(cin, name);
        cout << "\nEnter Basic salary: ";
        cin >> s;
        cout << "\nEnter Pay Grade: ";
        cin >> grade;
        cout << "\nEnter No. of OT hours: ";
        cin >> otH;
        cout << "\nEnter OT payment: ";
        cin >> otP;
        cout << "\nEnter gross payment: ";
        cin >> Gross;
        cout << "\nEnter withholding tax: ";
        cin >> whT;
        cout << "\nEnter net pay: \n";
        cin >> Net;
        cout << endl;

        cout << "\n Final Output :";
        cout << "\n ------------------------------ ";
        cout << "\n Employee name: " << name;
        cout << "\n Basic salary: Php " << s << ".00";
        cout << "\n Pay grade: " << grade;
        cout << "\n No. of OT Hours: " << otH << " hour/s";
        cout << "\n OT pay: Php " << otP << ".00";
        cout << "\n Gross pay: Php " << Gross << ".00";
        cout << "\n Withholding Tax: Php " << whT << ".00";
        cout << "\n Net pay: Php " << Net << ".00 ";
        cout << "\n--------------------------------" <<  endl; 
    }
    
};

int main() 
{   Payslip p;   //creating object of Payslip //
    Employee e;
    string n;
    int oth;
    int s;
    int otp;
    
    p.display();  // to display the input validations and basic salary details //

    cout << "Enter name: "; //these are the objects of Payslip class required to be instantiate in main method//
    getline (cin, n);
    p.setName(n);

    cout << "Enter basic salary: ";
    cin >> s;
    p.setSalary(s);
    
    cout << "Enter No. of OT hours: ";
    cin >> oth;
    p.setOThours(oth);  
    p.calculate();  //shows how computations  are done
    e.output();   //final output in Employee class
    return 0;
}

// Now, I'm going to try every salary grade to see if computations are correct//
//upon Re-entering the informations, I will insert a comma in between integers so it will manifest the same//
//  on the final output  //

//The end of video //


