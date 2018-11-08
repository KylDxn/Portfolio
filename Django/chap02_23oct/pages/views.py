from django.http import HttpResponse



def homePageView(request):
    return HttpResponse('Hello, World! This is Kyle! I made this with Django!')
