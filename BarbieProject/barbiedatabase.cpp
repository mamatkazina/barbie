// // barbiedatabase.cpp
// #include "barbiedatabase.h"
// #include <algorithm>

// BarbieDatabase::BarbieDatabase(QObject *parent) : QObject(parent) {}

// void BarbieDatabase::addBarbie(const Barbie &barbie) {
//     m_barbies.append(barbie);
// }

// void BarbieDatabase::removeBarbie(int index) {
//     if (index >= 0 && index < m_barbies.size()) {
//         m_barbies.removeAt(index);
//     }
// }

// void BarbieDatabase::sortBySeries() {
//     std::sort(m_barbies.begin(), m_barbies.end(), [](const Barbie &a, const Barbie &b) {
//         return a.series < b.series;
//     });
// }

// void BarbieDatabase::sortByModel() {
//     std::sort(m_barbies.begin(), m_barbies.end(), [](const Barbie &a, const Barbie &b) {
//         return a.model < b.model;
//     });
// }

// QVector<Barbie> BarbieDatabase::getBarbies() const {
//     return m_barbies;
// }
