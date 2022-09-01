Программа для расшифровки сообщений BUFR.

BUFR (Binary Universal Form for Representation meteorological data) - Двоичная Универсальная Форма для представления метеорологических данных.

Пример сообщения BUFR:

![image](https://user-images.githubusercontent.com/83878144/187885377-28c66b7a-89fc-4e52-9a4a-8187b6d87b6f.png)

Особенности сообщений BUFR:
1) Табличный кодекс;
2) Самоописательный формат кода;
3) Сжатие, для улучшенной скорости  передачи.

![image](https://user-images.githubusercontent.com/83878144/187885682-87b14a4f-204a-4390-95c5-95fc946a41dc.png)

Описание данных должно состоять из одного или более дескрипторов. Каждый дескриптор должен занимать 2 октета и содержать три части: F (2 бита), X (6 битов) и Y (8 битов).
На основе дескрипторов, находящихся в 3-м разделе, интерпретируются данные, находящиеся в 4-м разделе.

![image](https://user-images.githubusercontent.com/83878144/187885742-4837a6e7-0fa9-4768-af0f-3266a91015d4.png)

Интерфейс программы:

![image](https://user-images.githubusercontent.com/83878144/187885871-ee57c203-d160-48d1-8fe1-47f881c513e0.png)

Результат работы программы:

![image](https://user-images.githubusercontent.com/83878144/187885967-86f41140-1e9c-448f-999e-4e1cc6ee7bf9.png)
