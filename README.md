# Projeto C++: Car e Truck

## Descrição
Este projeto foi desenvolvido em C++ com o objetivo de demonstrar conceitos básicos de Programação Orientada a Objetos (POO), utilizando classes, atributos, construtores e métodos.

O programa cria dois objetos:
- Um carro (`Car`)
- Um caminhão (`Truck`)

Cada classe possui atributos específicos e um método responsável por exibir as informações no terminal.

---

## Estrutura do Projeto

```text
.
├── main.cpp
├── Car.hpp
├── Car.cpp
├── Truck.hpp
├── Truck.cpp
└── Makefile
```

---

## Classes

### Classe `Car`
Representa um carro com:
- Marca (`brand`)
- Ano (`year`)

Método principal:
- `display()` → exibe os dados do carro.

### Classe `Truck`
Representa um caminhão com:
- Modelo (`model`)
- Capacidade de carga (`capacity`)

Método principal:
- `display()` → exibe os dados do caminhão.

---

## Compilação

O projeto utiliza um `Makefile` para facilitar a compilação.

### Compilar o projeto
```bash
make
```

### Executar o programa
```bash
./app
```

### Limpar arquivos compilados
```bash
make clean
```

---

## Exemplo de Saída

```text
=== Car ===
Brand: Toyota
Year: 2022

=== Truck ===
Truck Model: Volvo FH
Capacity: 18.5 tons
```

---

## Conceitos Utilizados
- Programação Orientada a Objetos (POO)
- Classes e Objetos
- Encapsulamento
- Construtores
- Separação entre arquivos `.hpp` e `.cpp`
- Uso de `Makefile`
- Compilação com `g++`

---

## Autor
alan cunha café
