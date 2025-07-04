# PingMACUtility

## Описание

Работает только в пределах локальной сети (LAN), так как MAC-адрес можно получить только через ARP, который не проходит через маршрутизаторы.

---

## Сборка
```
mkdir build && cd build
cmake ..
make 
```
### Структура проекта

.
├── CMakeLists.txt
├── README.md
└── source
    ├── main.cpp
    ├── PingUtility.cpp
    └── PingUtility.h


### 🛠 Требования

- CMake ≥ 3.10
- Компилятор с поддержкой C++17
- Linux (ping, ip)
