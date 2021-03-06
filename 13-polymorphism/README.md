# Полиморфизъм

**Задача 1.**  
Да се направи игра, в която:
Игралното поле представлява квадратна матрица от NxN клетки. Клетките имат набор от свойства, които пречат или помагат на играча да премине през полето.

Всяка игра се играе от един играч. Той започва от позиция (0, 0), **която винаги е празна**, и трябва да достигне отсрещната страна на полето (преминавайки и през последната клетка).

Играта е конзолна и играчът може да се движи:
- нагоре (**u** - up)
- надолу (**d** - down)
- наляво (**l** - left)
- надясно (**r** - right)
  
стига да съществува валидна клетка от дъската. Изключение е финалната клетка, след която с движение надясно играчът излиза от полето.

### Клетки в полето.
Играчът може да се натъкне на всяка от следните клетки:
- светулка - осветява пътя на играча (дава информация за вида на съседните полета; съседни полета са тези, до които играчът може да се придвижи с един ход)

- паяк - играчът попада в мрежата (умира и за него играта приключва)

- портал - връща играча в началото на полето - позиция (0, 0)

Играта приключва когато:

- играчът премине през полето успешно

- играчът попадне на поле паяк
