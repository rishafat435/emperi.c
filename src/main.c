#include <notcurses/notcurses.h>

int main(void)
{
    struct notcurses_options opts = {
        .flags = NCOPTION_SUPPRESS_BANNERS};

    struct notcurses *nc = notcurses_init(&opts, NULL);
    if (nc == NULL)
    {
        return 1;
    }

    struct ncplane *std = notcurses_stdplane(nc);
    ncplane_set_fg_rgb8(std, 0, 255, 100);
    ncplane_putstr_yx(std, 5, 10, "empiric.c is alive.");
    notcurses_render(nc);

    notcurses_get_blocking(nc, NULL);
    notcurses_stop(nc);
    return 0;
}

