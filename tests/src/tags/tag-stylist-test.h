#ifndef TAG_STYLIST_TEST_H
#define TAG_STYLIST_TEST_H

#include "test-suite.h"
#include "tags/tag-stylist.h"
#include <QSettings>


class TagStylistTest : public TestSuite
{
	Q_OBJECT

	private slots:
		void init();
		void cleanup();

		void testBasic();
		void testIgnored();
		void testBlacklisted();
		void testFavorite();
		void testKeptForLater();
		void testWithCount();
		void testSortName();
		void testSortType();
		void testSortCount();

	protected:
		void assertSort(const QString &sort, const QStringList &expectedOrder);

	private:
		QSettings *m_settings;
		Profile *m_profile;
};

#endif // TAG_STYLIST_TEST_H
