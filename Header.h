class employee {
private :
	char *firstname;
	char *lastname;
	double hourlyrate;
		double hours;
		double salary;

public:
	employee();
	~employee();

	void setfirstname(char*);
	void setlastname(char *);
	void sethourlyrate(double );
	void sethours(double);

	char * getfirstname();
	char * getlastname();
	double gethourlyrate();
	double gethours();

	void printpayroll();
	void addsalary();
	void addwork();


};