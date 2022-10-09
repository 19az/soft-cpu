# Софт процессор
Софт процессор и ассемблер для него. Осень 2022, МФТИ.

## Сборка

```bash
make 
```

Компилятор: g++ (GCC) 12.2.0

Стандарт: с++14

## Запуск

### Ассемблирование

```bash
./subdirs/asm/asm file.asm [file.code]
```

* file.asm - входной файл с ассемблерными инструкциями
* file.code (опционально, a.code по умолчанию) - выходной файл с машинным кодом

### Запуск процессора

```bash
./subdirs/cpu/cpu file.code
```

* file.code - файл с машинным кодом

### Ассемблер + процессор

```bash
./make file.asm [file.code]
```

* file.asm - входной файл с ассемблерными инструкциями
* file.code (опционально, a.code по умолчанию) - выходной файл с машинным кодом