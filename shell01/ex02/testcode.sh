find . -type f -name * -exec basename {} \; | sed 's/.sh//'
