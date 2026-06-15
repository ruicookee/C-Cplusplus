# You Need To Hear This!!!
## int / double = double or double / int = double
- `10/20.0 = 0.5`
- `20/10.0 = 2.0`

## int / int = int (Like Flooring but not really)
- `10/20 = 0`
- floors for the positive numbers
- but for the negatives
- `-7/2 = -3` but true flooring result in `-4`

## Declaration Trumps Alls
- `int speed;` declaration is done
- `speed = 10/20.0;` would result in `speed = 0` due to C truncating it
- likewise `double speed;` 
- and then `speed = 10/20` would result in a conversion to `speed = 0.0`

## printf Is Really Unintelligent
- printf format MUST match the values format, it cant convert

## int * double = double
## int + double = double

rest are intuitive i believe...?

## Fundamental Types
- char
- int
- double
## Modifiers
- unsigned
- long