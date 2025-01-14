#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <iomanip>

struct SaleRecord {
    std::string date;
    std::string product;
    int quantity;
    double price;
};

std::vector<SaleRecord> readSalesCSV(const std::string& filename) {
    std::vector<SaleRecord> sales;
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return sales;
    }

    std::string line;
    // Pula o cabeçalho
    std::getline(file, line);
    
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        SaleRecord record;
        std::string quantity_str, price_str;

        if (std::getline(ss, record.date, ',') &&
            std::getline(ss, record.product, ',') &&
            std::getline(ss, quantity_str, ',') &&
            std::getline(ss, price_str, ',')) {
            
            record.quantity = std::stoi(quantity_str);
            record.price = std::stod(price_str);
            sales.push_back(record);
        }
    }

    file.close();
    return sales;
}
