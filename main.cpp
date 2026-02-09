// Forrest Kravitz

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main() {
  
  ifstream in_data;
  ofstream out_data;

// getting the wanted file
string input_file;

cout << "Which file has the info you want?" << endl;
cin >> input_file;

//openning files
in_data.open(input_file);
out_data.open("output.dat");

// variables
  string firstname,lastname;
  double base_salary,commision_percent,total_sales,expense,commision_total,total_salary;

// input from file retreval
in_data >> firstname >> lastname >> base_salary >> commision_percent >> total_sales >> expense;

// computations and
commision_total = total_sales * (commision_percent/100);
total_salary = base_salary + commision_total + expense; 

// final output in output.dat
cout << firstname << " " << lastname << " " << total_salary << endl;

out_data << "Payroll data for " << firstname << " " << lastname << endl<< endl;
out_data << "Base Salary: " << fixed << setprecision(2) << base_salary << endl;
out_data << "Commission: " << fixed << setprecision(2) <<commision_total<< endl;
out_data << "Expenses: " << fixed << setprecision(2) << expense << endl << endl;
out_data << setw(15) << "--------" << endl;
out_data << "Total: " << fixed << setprecision(2) << total_salary << endl;

// closing files
in_data.close();
out_data.close();

}
