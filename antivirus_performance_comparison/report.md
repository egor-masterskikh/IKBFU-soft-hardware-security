# Проверка работы антивирусных программ

> ✍️ выполнил Мастерских Егор, студент группы ИБ-22 (3 курс)

---

Дан стандартный тестовый файл EICAR (назовём `eicar.com`):

```
X5O!P%@AP[4\PZX54(P^)7CC)7}$EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*
```

и его модификации, содержащие префиксы соответственно `CORR-`, `CURE-`, `DELE-`, `ERRO-`, `SUSP-`, `WARN-`.

Проверить эти файлы антивирусами **Kaspersky**, **Dr.Web** и **AVZ** и привести результаты их проверки.

### Решение

### Kaspersky (Free) 21.20.8.505

| объект | угроза | действие | событие |
| --- | --- | --- | --- |
| `eicar.com` | EICAR-Test-File | удалён | лечение невозможно |
| `corr-eicar.com` | EICAR-Test-File | - | повреждён |
| `cure-eicar.com` | - | вылечен |  |
| `dele-eicar.com` | EICAR-Test-File | удалён |  |
| `erro-eicar.com` | - | - | ошибка обработки |
| `susp-eicar.com` | EICAR-Test-File | удалён |  |
| `warn-eicar.com` | EICAR-Test-File | удалён |  |

[kaspersky_report.txt](kaspersky_report.txt)

### Dr.Web Security Space 12.0

| объект | угроза | действие |
| --- | --- | --- |
| `eicar.com` | EICAR Test File (NOT a Virus!) | отправлен в карантин |

[drweb_report.csv](drweb_report.csv)

Для остальных файлов угроза не обнаружена

### AVZ 4.46

| объект | угроза | действие |
| --- | --- | --- |
| `eicar.com` | not-a-virus.EICAR-Test-File | удалён |

Для остальных файлов угроза не обнаружена

[avz_report.txt](avz_report.txt)
