#include <notcurses/notcurses.h>
#include <locale.h>

typedef struct notcurses_options notcurses_options;
typedef struct notcurses notcurses;
typedef struct ncplane ncplane;

int main(void)
{
    setlocale(LC_ALL, "");

    notcurses_options ncr_settings = {
        .loglevel = NCLOGLEVEL_SILENT,
        .margin_b = 0,
        .margin_l = 0,
        .margin_r = 0,
        .margin_t = 0,
        .flags = NCOPTION_SUPPRESS_BANNERS,
    };

    notcurses *ncopen = notcurses_init(&ncr_settings, NULL);
    if (ncopen == NULL)
    {
        fprintf(stderr, "Didnt open");
        return 1;
    }

    ncplane *win0 = notcurses_stdplane(ncopen);

    ncplane_printf_yx(win0, 10, 10, "Well first succesfull notcurses code 😁");
    notcurses_render(ncopen);
    notcurses_get_blocking(ncopen, NULL);

    notcurses_stop(ncopen);
    return 0;
}
