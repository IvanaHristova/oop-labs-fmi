# Класове

[Задачa](#задачa)

### **Спецификатори за достъп:**
`private` - по подразниране, `protected`, `public`

Знаем вече следните неща за конструкторите:
&nbsp;
| Kонструктор |
| --- |
| 1. Метод за създаване на обект на класа. |
| 2. Няма тип на връщане. |
| 3. Носи същото име като класа. |
| 4. Може да приема аргументи, които ни трябват за създаването на обекта. |
| 5. Когато не дефинираме конструктор в тялото на класа, такъв се създава по подразбиране. |
| 6. Когато дефинираме конструктор в тялото на класа, конструктор по подразбиране не се създава. |
| 7. За инициализирането на член-данните можем да използваме инициализиращ списък. |

&nbsp;
### **Голяма тройка**

&nbsp;
| Kопи конструктор |
| --- |
| 1. Метод за инициализиране на обект посредством друг обект от същия клас,<br />т.е. **новият обект** се създава чрез друг **вече същестуващ** обект. |
| 2. Няма тип на връщане. |
| 3. Носи същото име като класа. |
| 4. Когато не го дефинираме, такъв се създава по подразбиране. |
| 5. Трябва да го дефинираме когато имаме по-сложни типове за копиране,<br />за които изискваме специално поведение (например при пойнтъри и динамично заделяне на памет). |
| Подробна информация можете да намерите [тук](https://en.cppreference.com/w/cpp/language/copy_constructor) и [тук](https://www.geeksforgeeks.org/copy-constructor-in-cpp/). |

&nbsp;
| Oператор = |
| --- |
| 1. Метод за присвояване на информацията на друг обект от същия тип на текущия,<br /> т.е. на **вече създаден** обект се присвоява друга стойност. |
| 2. Има тип на връщане `ClassName&`. |
| 3. Носи името `operator=`. |
| Подробна инфромация можете да намерите [тук](https://en.cppreference.com/w/cpp/language/copy_assignment). |

&nbsp;
| Деструктор |
| --- |
| 1. Метод за триене на обекта (освобождаване на паметта му). |
| 2. Няма тип на връщане. |
| 3. Носи същото име като класа, но със символа `~` отпред. |
| 4. Няма аргументи. |
| 5. Единствен е, не може да се създава повече от един деструктор. |
| 6. Вика се автоматично когато се разрушават обекти. |
| 7. Трябва да бъде деклариран в `public` секция. |
| 8. Вика се при:<br /> - край на функцията<br /> - край на програмата<br /> - край на блок с локални променливи от съответния тип<br /> - при викане на оператор delete |
| Подробна информация [тук](https://en.cppreference.com/w/cpp/language/destructor) и [тук](https://www.geeksforgeeks.org/destructors-c/). |

&nbsp;
&nbsp;
### **Гетъри и сетъри:**
- Методи, чието предназначение е да дават безопасен начин за достъпване и промяна на член данните на класа.
- Също ги наричаме селектори и мутатори.

&nbsp;
# Задачa

**Задача 1.** Един от предметите ви този семестър е английски език. Вие искате с възможно най-малко усилия да научите нужното, за да го вземете. Едно от нещата, върху които трябва да се фокусирате са думите. Вие обаче сте от ФМИ и ви е в кръвта да автоматизирате всичко.
Направете програма с команден интерфейс, която да ви помага в ученето на думи.

Функционални изисквания:
| Команда | Описание |
| --- | --- |
| `add <word>` | Добавя думата, която сте подали към списъка ви. |
| `get-word` | Връща някоя от думите от списъка. |
| `save` | Запазва думите от списъка ви в постоянната памет. |
| `open` | Зарежда думите от файл в списъка ви. |
| `exit` | Прекратява работата на програмата, записвайки думите в текущия списък автоматично. |
| `help` | Дава информация за командите на потребителя. |

