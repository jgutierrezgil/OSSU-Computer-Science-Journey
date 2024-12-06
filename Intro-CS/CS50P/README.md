# 🐍 CS50P: Introduction to Programming with Python

## 📚 Acerca del Curso
**Harvard CS50P 2024**  
Este directorio contiene todos los materiales, proyectos y notas relacionadas con CS50's Introduction to Programming with Python.

## 🗂️ Estructura del Curso

### Week 0 - Functions, Variables
- **Problem Set 0:**
  - Indoor Voice
  - Playback Speed
  - Making Faces
  - Einstein
  - Tip Calculator

### Week 1 - Conditionals
- **Problem Set 1:**
  - Deep Thought
  - Home Federal Savings Bank
  - File Extensions
  - Math Interpreter
  - Meal Time

### Week 2 - Loops
- **Problem Set 2:**
  - camelCase
  - Coke Machine
  - Just setting up my twttr
  - Vanity Plates
  - Nutrition Facts

### Week 3 - Exceptions
- **Problem Set 3:**
  - Fuel Gauge
  - Felipe's Taqueria
  - Grocery List
  - Outdated

### Week 4 - Libraries
- **Problem Set 4:**
  - Emojize
  - Frank, Ian and Glen's Letters
  - Adieu, Adieu
  - Guessing Game
  - Little Professor
  - Bitcoin Price Index

### Week 5 - Unit Tests
- **Problem Set 5:**
  - Testing my twttr
  - Back to the Bank
  - Re-requesting a Vanity Plate
  - Testing my twttr
  - Test Fuel
  - Little Professor

### Week 6 - File I/O
- **Problem Set 6:**
  - Lines of Code
  - Pizza Py
  - Scourgify
  - CS50 P-Shirt

### Week 7 - Regular Expressions
- **Problem Set 7:**
  - NUMB3RS
  - Watch on YouTube
  - Working 9 to 5
  - Regular, um, Expressions
  - Response Validation

### Week 8 - Object-Oriented Programming
- **Problem Set 8:**
  - Seasons of Love
  - Cookie Jar
  - Jar
  - CS50 Shirtificate

### Final Project
- Proyecto final que implementa conceptos del curso

## 📁 Estructura de Carpetas
```
cs50p/
├── week0/
│   ├── indoor/
│   ├── playback/
│   ├── faces/
│   ├── einstein/
│   └── tip/
├── week1/
│   ├── deep/
│   ├── bank/
│   ├── extensions/
│   ├── interpreter/
│   └── meal/
├── week2/
│   └── ...
└── project/
```

## 🛠️ Herramientas y Configuración

### Requisitos Básicos
- Python 3.11 o superior
- pip (gestor de paquetes de Python)
- VS Code (recomendado)
- Git

### Librerías Principales
```python
# requirements.txt
pytest
requests
pylint
black
```

### Configuración del Entorno
```bash
# Crear entorno virtual
python -m venv venv

# Activar entorno
# Windows
.\venv\Scripts\activate
# Unix/MacOS
source venv/bin/activate

# Instalar dependencias
pip install -r requirements.txt
```

## ✅ Lista de Verificación por Semana

### Week 0 - Functions
- [ ] Comprender funciones print() y input()
- [ ] Manejar strings básicos
- [ ] Realizar operaciones matemáticas simples
- [ ] Implementar f-strings

### Week 1 - Conditionals
- [ ] Dominar if, elif, else
- [ ] Usar operadores lógicos
- [ ] Implementar match (switch)
- [ ] Manejar expresiones booleanas

### Week 2 - Loops
- [ ] Implementar while loops
- [ ] Usar for loops
- [ ] Manejar break y continue
- [ ] Trabajar con range()

### Week 3-8
*(Similar structure for remaining weeks)*

## 📝 Guía de Estilo

### Convenciones de Código
- Seguir PEP 8
- Usar nombres descriptivos
- Documentar funciones con docstrings
- Mantener funciones cortas y enfocadas

### Ejemplo de Formato
```python
def main():
    """Main function of the program."""
    name = get_name()
    print(f"hello, {name}")

def get_name():
    """Get user's name with input validation."""
    return input("What's your name? ").strip()

if __name__ == "__main__":
    main()
```

## 🎯 Objetivos del Curso

1. Fundamentos de Programación
   - [ ] Sintaxis de Python
   - [ ] Estructuras de control
   - [ ] Funciones y modularidad

2. Manejo de Datos
   - [ ] Tipos de datos básicos
   - [ ] Estructuras de datos
   - [ ] File I/O

3. Calidad de Código
   - [ ] Testing unitario
   - [ ] Debugging
   - [ ] Documentación

4. Programación Avanzada
   - [ ] Regular expressions
   - [ ] OOP
   - [ ] Bibliotecas externas

## 📊 Seguimiento de Progreso

| Semana | Lecturas | Problem Set | Lab | Score |
|--------|----------|-------------|-----|--------|
| Week 0 | ⬜ | ⬜ | - | |
| Week 1 | ⬜ | ⬜ | - | |
| Week 2 | ⬜ | ⬜ | - | |
| Week 3 | ⬜ | ⬜ | - | |
| Week 4 | ⬜ | ⬜ | - | |
| Week 5 | ⬜ | ⬜ | - | |
| Week 6 | ⬜ | ⬜ | - | |
| Week 7 | ⬜ | ⬜ | - | |
| Week 8 | ⬜ | ⬜ | - | |
| Project| - | ⬜ | - | |

## 💡 Tips y Mejores Prácticas

1. Testing
   ```python
   def test_hello():
       assert hello("David") == "hello, David"
       assert hello("") == "hello, world"
   ```

2. Error Handling
   ```python
   try:
       x = int(input("Number: "))
   except ValueError:
       print("Not a number")
   ```

3. Documentation
   ```python
   def calculate_bmi(weight, height):
       """
       Calculate BMI given weight in kg and height in meters.
       
       Args:
           weight (float): Weight in kilograms
           height (float): Height in meters
           
       Returns:
           float: Calculated BMI value
       """
       return weight / (height ** 2)
   ```

## 📚 Recursos Adicionales

- [Documentación Oficial de Python](https://docs.python.org/)
- [Python Style Guide (PEP 8)](https://peps.python.org/pep-0008/)
- [Real Python Tutorials](https://realpython.com/)
- [CS50P Notes](https://cs50.harvard.edu/python/)

## ⚠️ Política de Integridad Académica

1. Permitido:
   - Consultar documentación
   - Discutir conceptos
   - Compartir pseudocódigo

2. No Permitido:
   - Compartir código de soluciones
   - Copiar código de otros
   - Publicar soluciones

---

*Última actualización: Diciembre 2024*

