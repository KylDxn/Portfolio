# pages/view.py

from django.http import HttpResponse

def homePageView(request):
	return HttpResponse('Hello world, Kyle Dixon is learning the Django Framework!!')
