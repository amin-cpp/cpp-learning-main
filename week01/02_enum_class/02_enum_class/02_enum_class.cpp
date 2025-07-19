#include <iostream>
#include <string>
using namespace std;

enum class OrderStatus {
	Pending,        
	Paid,           
	Shipped,        
	Delivered,     
	Canceled        
};

int main() {
	OrderStatus ali_order = OrderStatus::Paid;
	OrderStatus reza_order = OrderStatus::Shipped;
	OrderStatus sara_order = OrderStatus::Canceled;

	cout << "Ali's Order: ";
	switch (ali_order) {
	case OrderStatus::Pending:
		cout << "Waiting for payment. [Pending]\n";
		break;
	case OrderStatus::Paid:
		cout << "Payment received. Preparing shipment. [Paid]\n";
		break;
	case OrderStatus::Shipped:
		cout << "Order has been shipped. [Shipped]\n";
		break;
	case OrderStatus::Delivered:
		cout << "Order delivered. Thank you! [Delivered]\n";
		break;
	case OrderStatus::Canceled:
		cout << "Order was canceled. [Canceled]\n";
		break;
	}

	cout << "Reza's Order: ";
	switch (reza_order) {
	case OrderStatus::Pending:
		cout << "Waiting for payment. [Pending]\n";
		break;
	case OrderStatus::Paid:
		cout << "Payment received. Preparing shipment. [Paid]\n";
		break;
	case OrderStatus::Shipped:
		cout << "Order has been shipped. [Shipped]\n";
		break;
	case OrderStatus::Delivered:
		cout << "Order delivered. Thank you! [Delivered]\n";
		break;
	case OrderStatus::Canceled:
		cout << "Order was canceled. [Canceled]\n";
		break;
	}

	cout << "Sara's Order: ";
	switch (sara_order) {
	case OrderStatus::Pending:
		cout << "Waiting for payment. [Pending]\n";
		break;
	case OrderStatus::Paid:
		cout << "Payment received. Preparing shipment. [Paid]\n";
		break;
	case OrderStatus::Shipped:
		cout << "Order has been shipped. [Shipped]\n";
		break;
	case OrderStatus::Delivered:
		cout << "Order delivered. Thank you! [Delivered]\n";
		break;
	case OrderStatus::Canceled:
		cout << "Order was canceled. [Canceled]\n";
		break;
	}
	cout << "code updated . \n";

	return 0;
}
