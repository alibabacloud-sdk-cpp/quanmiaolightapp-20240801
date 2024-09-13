// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_H_
#define ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_QuanMiaoLightApp20240801 {
class ListHotTopicSummariesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListHotTopicSummariesRequest() {}

  explicit ListHotTopicSummariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListHotTopicSummariesRequest() = default;
};
class ListHotTopicSummariesResponseBodyDataNewsComments : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  ListHotTopicSummariesResponseBodyDataNewsComments() {}

  explicit ListHotTopicSummariesResponseBodyDataNewsComments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataNewsComments() = default;
};
class ListHotTopicSummariesResponseBodyDataNews : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataNewsComments>> comments{};
  shared_ptr<string> content{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  ListHotTopicSummariesResponseBodyDataNews() {}

  explicit ListHotTopicSummariesResponseBodyDataNews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      vector<boost::any> temp1;
      for(auto item1:*comments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["comments"] = boost::any(temp1);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comments") != m.end() && !m["comments"].empty()) {
      if (typeid(vector<boost::any>) == m["comments"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataNewsComments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["comments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataNewsComments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        comments = make_shared<vector<ListHotTopicSummariesResponseBodyDataNewsComments>>(expect1);
      }
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataNews() = default;
};
class ListHotTopicSummariesResponseBodyDataSummarySummaries : public Darabonba::Model {
public:
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  ListHotTopicSummariesResponseBodyDataSummarySummaries() {}

  explicit ListHotTopicSummariesResponseBodyDataSummarySummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["summary"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataSummarySummaries() = default;
};
class ListHotTopicSummariesResponseBodyDataSummary : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataSummarySummaries>> summaries{};

  ListHotTopicSummariesResponseBodyDataSummary() {}

  explicit ListHotTopicSummariesResponseBodyDataSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summaries) {
      vector<boost::any> temp1;
      for(auto item1:*summaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["summaries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("summaries") != m.end() && !m["summaries"].empty()) {
      if (typeid(vector<boost::any>) == m["summaries"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataSummarySummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["summaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataSummarySummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        summaries = make_shared<vector<ListHotTopicSummariesResponseBodyDataSummarySummaries>>(expect1);
      }
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataSummary() = default;
};
class ListHotTopicSummariesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<double> hotValue{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataNews>> news{};
  shared_ptr<ListHotTopicSummariesResponseBodyDataSummary> summary{};
  shared_ptr<string> textSummary{};

  ListHotTopicSummariesResponseBodyData() {}

  explicit ListHotTopicSummariesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotValue) {
      res["hotValue"] = boost::any(*hotValue);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (news) {
      vector<boost::any> temp1;
      for(auto item1:*news){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["news"] = boost::any(temp1);
    }
    if (summary) {
      res["summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textSummary) {
      res["textSummary"] = boost::any(*textSummary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotValue") != m.end() && !m["hotValue"].empty()) {
      hotValue = make_shared<double>(boost::any_cast<double>(m["hotValue"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("news") != m.end() && !m["news"].empty()) {
      if (typeid(vector<boost::any>) == m["news"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataNews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["news"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataNews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        news = make_shared<vector<ListHotTopicSummariesResponseBodyDataNews>>(expect1);
      }
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["summary"].type()) {
        ListHotTopicSummariesResponseBodyDataSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["summary"]));
        summary = make_shared<ListHotTopicSummariesResponseBodyDataSummary>(model1);
      }
    }
    if (m.find("textSummary") != m.end() && !m["textSummary"].empty()) {
      textSummary = make_shared<string>(boost::any_cast<string>(m["textSummary"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyData() = default;
};
class ListHotTopicSummariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListHotTopicSummariesResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListHotTopicSummariesResponseBody() {}

  explicit ListHotTopicSummariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListHotTopicSummariesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotTopicSummariesResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBody() = default;
};
class ListHotTopicSummariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotTopicSummariesResponseBody> body{};

  ListHotTopicSummariesResponse() {}

  explicit ListHotTopicSummariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotTopicSummariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotTopicSummariesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotTopicSummariesResponse() = default;
};
class RunMarketingInformationExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPrompt{};
  shared_ptr<string> extractType{};
  shared_ptr<string> modelId{};
  shared_ptr<vector<string>> sourceMaterials{};

  RunMarketingInformationExtractRequest() {}

  explicit RunMarketingInformationExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sourceMaterials) {
      res["sourceMaterials"] = boost::any(*sourceMaterials);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sourceMaterials") != m.end() && !m["sourceMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sourceMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sourceMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceMaterials = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunMarketingInformationExtractRequest() = default;
};
class RunMarketingInformationExtractShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPrompt{};
  shared_ptr<string> extractType{};
  shared_ptr<string> modelId{};
  shared_ptr<string> sourceMaterialsShrink{};

  RunMarketingInformationExtractShrinkRequest() {}

  explicit RunMarketingInformationExtractShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sourceMaterialsShrink) {
      res["sourceMaterials"] = boost::any(*sourceMaterialsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sourceMaterials") != m.end() && !m["sourceMaterials"].empty()) {
      sourceMaterialsShrink = make_shared<string>(boost::any_cast<string>(m["sourceMaterials"]));
    }
  }


  virtual ~RunMarketingInformationExtractShrinkRequest() = default;
};
class RunMarketingInformationExtractResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunMarketingInformationExtractResponseBodyHeader() {}

  explicit RunMarketingInformationExtractResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyHeader() = default;
};
class RunMarketingInformationExtractResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunMarketingInformationExtractResponseBodyPayloadOutput() {}

  explicit RunMarketingInformationExtractResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayloadOutput() = default;
};
class RunMarketingInformationExtractResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunMarketingInformationExtractResponseBodyPayloadUsage() {}

  explicit RunMarketingInformationExtractResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayloadUsage() = default;
};
class RunMarketingInformationExtractResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunMarketingInformationExtractResponseBodyPayloadOutput> output{};
  shared_ptr<RunMarketingInformationExtractResponseBodyPayloadUsage> usage{};

  RunMarketingInformationExtractResponseBodyPayload() {}

  explicit RunMarketingInformationExtractResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunMarketingInformationExtractResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunMarketingInformationExtractResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunMarketingInformationExtractResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunMarketingInformationExtractResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayload() = default;
};
class RunMarketingInformationExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunMarketingInformationExtractResponseBodyHeader> header{};
  shared_ptr<RunMarketingInformationExtractResponseBodyPayload> payload{};

  RunMarketingInformationExtractResponseBody() {}

  explicit RunMarketingInformationExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunMarketingInformationExtractResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunMarketingInformationExtractResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunMarketingInformationExtractResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunMarketingInformationExtractResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponseBody() = default;
};
class RunMarketingInformationExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunMarketingInformationExtractResponseBody> body{};

  RunMarketingInformationExtractResponse() {}

  explicit RunMarketingInformationExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunMarketingInformationExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMarketingInformationExtractResponseBody>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponse() = default;
};
class RunMarketingInformationWritingRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPrompt{};
  shared_ptr<string> modelId{};
  shared_ptr<string> sourceMaterial{};
  shared_ptr<string> writingType{};

  RunMarketingInformationWritingRequest() {}

  explicit RunMarketingInformationWritingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sourceMaterial) {
      res["sourceMaterial"] = boost::any(*sourceMaterial);
    }
    if (writingType) {
      res["writingType"] = boost::any(*writingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sourceMaterial") != m.end() && !m["sourceMaterial"].empty()) {
      sourceMaterial = make_shared<string>(boost::any_cast<string>(m["sourceMaterial"]));
    }
    if (m.find("writingType") != m.end() && !m["writingType"].empty()) {
      writingType = make_shared<string>(boost::any_cast<string>(m["writingType"]));
    }
  }


  virtual ~RunMarketingInformationWritingRequest() = default;
};
class RunMarketingInformationWritingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunMarketingInformationWritingResponseBodyHeader() {}

  explicit RunMarketingInformationWritingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyHeader() = default;
};
class RunMarketingInformationWritingResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunMarketingInformationWritingResponseBodyPayloadOutput() {}

  explicit RunMarketingInformationWritingResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayloadOutput() = default;
};
class RunMarketingInformationWritingResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunMarketingInformationWritingResponseBodyPayloadUsage() {}

  explicit RunMarketingInformationWritingResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayloadUsage() = default;
};
class RunMarketingInformationWritingResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunMarketingInformationWritingResponseBodyPayloadOutput> output{};
  shared_ptr<RunMarketingInformationWritingResponseBodyPayloadUsage> usage{};

  RunMarketingInformationWritingResponseBodyPayload() {}

  explicit RunMarketingInformationWritingResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunMarketingInformationWritingResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunMarketingInformationWritingResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunMarketingInformationWritingResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunMarketingInformationWritingResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayload() = default;
};
class RunMarketingInformationWritingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunMarketingInformationWritingResponseBodyHeader> header{};
  shared_ptr<RunMarketingInformationWritingResponseBodyPayload> payload{};

  RunMarketingInformationWritingResponseBody() {}

  explicit RunMarketingInformationWritingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunMarketingInformationWritingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunMarketingInformationWritingResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunMarketingInformationWritingResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunMarketingInformationWritingResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponseBody() = default;
};
class RunMarketingInformationWritingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunMarketingInformationWritingResponseBody> body{};

  RunMarketingInformationWritingResponse() {}

  explicit RunMarketingInformationWritingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunMarketingInformationWritingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMarketingInformationWritingResponseBody>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponse() = default;
};
class RunScriptContinueRequest : public Darabonba::Model {
public:
  shared_ptr<string> scriptSummary{};
  shared_ptr<string> scriptTypeKeyword{};
  shared_ptr<string> userProvidedContent{};

  RunScriptContinueRequest() {}

  explicit RunScriptContinueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scriptSummary) {
      res["scriptSummary"] = boost::any(*scriptSummary);
    }
    if (scriptTypeKeyword) {
      res["scriptTypeKeyword"] = boost::any(*scriptTypeKeyword);
    }
    if (userProvidedContent) {
      res["userProvidedContent"] = boost::any(*userProvidedContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scriptSummary") != m.end() && !m["scriptSummary"].empty()) {
      scriptSummary = make_shared<string>(boost::any_cast<string>(m["scriptSummary"]));
    }
    if (m.find("scriptTypeKeyword") != m.end() && !m["scriptTypeKeyword"].empty()) {
      scriptTypeKeyword = make_shared<string>(boost::any_cast<string>(m["scriptTypeKeyword"]));
    }
    if (m.find("userProvidedContent") != m.end() && !m["userProvidedContent"].empty()) {
      userProvidedContent = make_shared<string>(boost::any_cast<string>(m["userProvidedContent"]));
    }
  }


  virtual ~RunScriptContinueRequest() = default;
};
class RunScriptContinueResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptContinueResponseBodyHeader() {}

  explicit RunScriptContinueResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyHeader() = default;
};
class RunScriptContinueResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunScriptContinueResponseBodyPayloadOutput() {}

  explicit RunScriptContinueResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyPayloadOutput() = default;
};
class RunScriptContinueResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptContinueResponseBodyPayloadUsage() {}

  explicit RunScriptContinueResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyPayloadUsage() = default;
};
class RunScriptContinueResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptContinueResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptContinueResponseBodyPayloadUsage> usage{};

  RunScriptContinueResponseBodyPayload() {}

  explicit RunScriptContinueResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptContinueResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptContinueResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptContinueResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptContinueResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponseBodyPayload() = default;
};
class RunScriptContinueResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptContinueResponseBodyHeader> header{};
  shared_ptr<RunScriptContinueResponseBodyPayload> payload{};

  RunScriptContinueResponseBody() {}

  explicit RunScriptContinueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptContinueResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptContinueResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptContinueResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptContinueResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponseBody() = default;
};
class RunScriptContinueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptContinueResponseBody> body{};

  RunScriptContinueResponse() {}

  explicit RunScriptContinueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptContinueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptContinueResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponse() = default;
};
class RunScriptPlanningRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalNote{};
  shared_ptr<bool> dialogueInScene{};
  shared_ptr<bool> plotConflict{};
  shared_ptr<string> scriptName{};
  shared_ptr<long> scriptShotCount{};
  shared_ptr<string> scriptSummary{};
  shared_ptr<string> scriptTypeKeyword{};

  RunScriptPlanningRequest() {}

  explicit RunScriptPlanningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalNote) {
      res["additionalNote"] = boost::any(*additionalNote);
    }
    if (dialogueInScene) {
      res["dialogueInScene"] = boost::any(*dialogueInScene);
    }
    if (plotConflict) {
      res["plotConflict"] = boost::any(*plotConflict);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (scriptShotCount) {
      res["scriptShotCount"] = boost::any(*scriptShotCount);
    }
    if (scriptSummary) {
      res["scriptSummary"] = boost::any(*scriptSummary);
    }
    if (scriptTypeKeyword) {
      res["scriptTypeKeyword"] = boost::any(*scriptTypeKeyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalNote") != m.end() && !m["additionalNote"].empty()) {
      additionalNote = make_shared<string>(boost::any_cast<string>(m["additionalNote"]));
    }
    if (m.find("dialogueInScene") != m.end() && !m["dialogueInScene"].empty()) {
      dialogueInScene = make_shared<bool>(boost::any_cast<bool>(m["dialogueInScene"]));
    }
    if (m.find("plotConflict") != m.end() && !m["plotConflict"].empty()) {
      plotConflict = make_shared<bool>(boost::any_cast<bool>(m["plotConflict"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("scriptShotCount") != m.end() && !m["scriptShotCount"].empty()) {
      scriptShotCount = make_shared<long>(boost::any_cast<long>(m["scriptShotCount"]));
    }
    if (m.find("scriptSummary") != m.end() && !m["scriptSummary"].empty()) {
      scriptSummary = make_shared<string>(boost::any_cast<string>(m["scriptSummary"]));
    }
    if (m.find("scriptTypeKeyword") != m.end() && !m["scriptTypeKeyword"].empty()) {
      scriptTypeKeyword = make_shared<string>(boost::any_cast<string>(m["scriptTypeKeyword"]));
    }
  }


  virtual ~RunScriptPlanningRequest() = default;
};
class RunScriptPlanningResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptPlanningResponseBodyHeader() {}

  explicit RunScriptPlanningResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyHeader() = default;
};
class RunScriptPlanningResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunScriptPlanningResponseBodyPayloadOutput() {}

  explicit RunScriptPlanningResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayloadOutput() = default;
};
class RunScriptPlanningResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptPlanningResponseBodyPayloadUsage() {}

  explicit RunScriptPlanningResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayloadUsage() = default;
};
class RunScriptPlanningResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptPlanningResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptPlanningResponseBodyPayloadUsage> usage{};

  RunScriptPlanningResponseBodyPayload() {}

  explicit RunScriptPlanningResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptPlanningResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptPlanningResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptPlanningResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptPlanningResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayload() = default;
};
class RunScriptPlanningResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptPlanningResponseBodyHeader> header{};
  shared_ptr<RunScriptPlanningResponseBodyPayload> payload{};

  RunScriptPlanningResponseBody() {}

  explicit RunScriptPlanningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptPlanningResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptPlanningResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptPlanningResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptPlanningResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponseBody() = default;
};
class RunScriptPlanningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptPlanningResponseBody> body{};

  RunScriptPlanningResponse() {}

  explicit RunScriptPlanningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptPlanningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptPlanningResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponse() = default;
};
class RunStyleWritingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> learningSamples{};
  shared_ptr<vector<string>> referenceMaterials{};
  shared_ptr<string> styleFeature{};
  shared_ptr<string> writingTheme{};

  RunStyleWritingRequest() {}

  explicit RunStyleWritingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (learningSamples) {
      res["learningSamples"] = boost::any(*learningSamples);
    }
    if (referenceMaterials) {
      res["referenceMaterials"] = boost::any(*referenceMaterials);
    }
    if (styleFeature) {
      res["styleFeature"] = boost::any(*styleFeature);
    }
    if (writingTheme) {
      res["writingTheme"] = boost::any(*writingTheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("learningSamples") != m.end() && !m["learningSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["learningSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["learningSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      learningSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("referenceMaterials") != m.end() && !m["referenceMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["referenceMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["referenceMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referenceMaterials = make_shared<vector<string>>(toVec1);
    }
    if (m.find("styleFeature") != m.end() && !m["styleFeature"].empty()) {
      styleFeature = make_shared<string>(boost::any_cast<string>(m["styleFeature"]));
    }
    if (m.find("writingTheme") != m.end() && !m["writingTheme"].empty()) {
      writingTheme = make_shared<string>(boost::any_cast<string>(m["writingTheme"]));
    }
  }


  virtual ~RunStyleWritingRequest() = default;
};
class RunStyleWritingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> learningSamplesShrink{};
  shared_ptr<string> referenceMaterialsShrink{};
  shared_ptr<string> styleFeature{};
  shared_ptr<string> writingTheme{};

  RunStyleWritingShrinkRequest() {}

  explicit RunStyleWritingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (learningSamplesShrink) {
      res["learningSamples"] = boost::any(*learningSamplesShrink);
    }
    if (referenceMaterialsShrink) {
      res["referenceMaterials"] = boost::any(*referenceMaterialsShrink);
    }
    if (styleFeature) {
      res["styleFeature"] = boost::any(*styleFeature);
    }
    if (writingTheme) {
      res["writingTheme"] = boost::any(*writingTheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("learningSamples") != m.end() && !m["learningSamples"].empty()) {
      learningSamplesShrink = make_shared<string>(boost::any_cast<string>(m["learningSamples"]));
    }
    if (m.find("referenceMaterials") != m.end() && !m["referenceMaterials"].empty()) {
      referenceMaterialsShrink = make_shared<string>(boost::any_cast<string>(m["referenceMaterials"]));
    }
    if (m.find("styleFeature") != m.end() && !m["styleFeature"].empty()) {
      styleFeature = make_shared<string>(boost::any_cast<string>(m["styleFeature"]));
    }
    if (m.find("writingTheme") != m.end() && !m["writingTheme"].empty()) {
      writingTheme = make_shared<string>(boost::any_cast<string>(m["writingTheme"]));
    }
  }


  virtual ~RunStyleWritingShrinkRequest() = default;
};
class RunStyleWritingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunStyleWritingResponseBodyHeader() {}

  explicit RunStyleWritingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyHeader() = default;
};
class RunStyleWritingResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunStyleWritingResponseBodyPayloadOutput() {}

  explicit RunStyleWritingResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyPayloadOutput() = default;
};
class RunStyleWritingResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunStyleWritingResponseBodyPayloadUsage() {}

  explicit RunStyleWritingResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyPayloadUsage() = default;
};
class RunStyleWritingResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunStyleWritingResponseBodyPayloadOutput> output{};
  shared_ptr<RunStyleWritingResponseBodyPayloadUsage> usage{};

  RunStyleWritingResponseBodyPayload() {}

  explicit RunStyleWritingResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunStyleWritingResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunStyleWritingResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunStyleWritingResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunStyleWritingResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponseBodyPayload() = default;
};
class RunStyleWritingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunStyleWritingResponseBodyHeader> header{};
  shared_ptr<RunStyleWritingResponseBodyPayload> payload{};

  RunStyleWritingResponseBody() {}

  explicit RunStyleWritingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunStyleWritingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunStyleWritingResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunStyleWritingResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunStyleWritingResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponseBody() = default;
};
class RunStyleWritingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunStyleWritingResponseBody> body{};

  RunStyleWritingResponse() {}

  explicit RunStyleWritingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunStyleWritingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunStyleWritingResponseBody>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponse() = default;
};
class RunVideoAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> generateOptions{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<string> videoUrl{};

  RunVideoAnalysisRequest() {}

  explicit RunVideoAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateOptions) {
      res["generateOptions"] = boost::any(*generateOptions);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["generateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["generateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      generateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~RunVideoAnalysisRequest() = default;
};
class RunVideoAnalysisShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> generateOptionsShrink{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<string> videoUrl{};

  RunVideoAnalysisShrinkRequest() {}

  explicit RunVideoAnalysisShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateOptionsShrink) {
      res["generateOptions"] = boost::any(*generateOptionsShrink);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      generateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["generateOptions"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~RunVideoAnalysisShrinkRequest() = default;
};
class RunVideoAnalysisResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunVideoAnalysisResponseBodyHeader() {}

  explicit RunVideoAnalysisResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyHeader() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage> usage{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>> videoShotAnalysisResults{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoShotAnalysisResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoShotAnalysisResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoShotAnalysisResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage>(model1);
      }
    }
    if (m.find("videoShotAnalysisResults") != m.end() && !m["videoShotAnalysisResults"].empty()) {
      if (typeid(vector<boost::any>) == m["videoShotAnalysisResults"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoShotAnalysisResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoShotAnalysisResults = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> endTimeFormat{};
  shared_ptr<long> startTime{};
  shared_ptr<string> startTimeFormat{};
  shared_ptr<string> text{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (endTimeFormat) {
      res["endTimeFormat"] = boost::any(*endTimeFormat);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (startTimeFormat) {
      res["startTimeFormat"] = boost::any(*startTimeFormat);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("endTimeFormat") != m.end() && !m["endTimeFormat"].empty()) {
      endTimeFormat = make_shared<string>(boost::any_cast<string>(m["endTimeFormat"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("startTimeFormat") != m.end() && !m["startTimeFormat"].empty()) {
      startTimeFormat = make_shared<string>(boost::any_cast<string>(m["startTimeFormat"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>> videoCaptions{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (videoCaptions) {
      vector<boost::any> temp1;
      for(auto item1:*videoCaptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoCaptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("videoCaptions") != m.end() && !m["videoCaptions"].empty()) {
      if (typeid(vector<boost::any>) == m["videoCaptions"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoCaptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoCaptions = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage> usage{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes : public Darabonba::Model {
public:
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>> childNodes{};
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings : public Darabonba::Model {
public:
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>> childNodes{};
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage> usage{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>> videoMindMappings{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoMindMappings) {
      vector<boost::any> temp1;
      for(auto item1:*videoMindMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoMindMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage>(model1);
      }
    }
    if (m.find("videoMindMappings") != m.end() && !m["videoMindMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["videoMindMappings"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoMindMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoMindMappings = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage> usage{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult> videoAnalysisResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult> videoCaptionResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult> videoGenerateResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult> videoMindMappingGenerateResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult> videoTitleGenerateResult{};

  RunVideoAnalysisResponseBodyPayloadOutput() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoAnalysisResult) {
      res["videoAnalysisResult"] = videoAnalysisResult ? boost::any(videoAnalysisResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoCaptionResult) {
      res["videoCaptionResult"] = videoCaptionResult ? boost::any(videoCaptionResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoGenerateResult) {
      res["videoGenerateResult"] = videoGenerateResult ? boost::any(videoGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoMindMappingGenerateResult) {
      res["videoMindMappingGenerateResult"] = videoMindMappingGenerateResult ? boost::any(videoMindMappingGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoTitleGenerateResult) {
      res["videoTitleGenerateResult"] = videoTitleGenerateResult ? boost::any(videoTitleGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("videoAnalysisResult") != m.end() && !m["videoAnalysisResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoAnalysisResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoAnalysisResult"]));
        videoAnalysisResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult>(model1);
      }
    }
    if (m.find("videoCaptionResult") != m.end() && !m["videoCaptionResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoCaptionResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoCaptionResult"]));
        videoCaptionResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult>(model1);
      }
    }
    if (m.find("videoGenerateResult") != m.end() && !m["videoGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoGenerateResult"]));
        videoGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult>(model1);
      }
    }
    if (m.find("videoMindMappingGenerateResult") != m.end() && !m["videoMindMappingGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoMindMappingGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoMindMappingGenerateResult"]));
        videoMindMappingGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult>(model1);
      }
    }
    if (m.find("videoTitleGenerateResult") != m.end() && !m["videoTitleGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoTitleGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoTitleGenerateResult"]));
        videoTitleGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutput() = default;
};
class RunVideoAnalysisResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadUsage() = default;
};
class RunVideoAnalysisResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutput> output{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadUsage> usage{};

  RunVideoAnalysisResponseBodyPayload() {}

  explicit RunVideoAnalysisResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunVideoAnalysisResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayload() = default;
};
class RunVideoAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunVideoAnalysisResponseBodyHeader> header{};
  shared_ptr<RunVideoAnalysisResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunVideoAnalysisResponseBody() {}

  explicit RunVideoAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunVideoAnalysisResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunVideoAnalysisResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunVideoAnalysisResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunVideoAnalysisResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBody() = default;
};
class RunVideoAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunVideoAnalysisResponseBody> body{};

  RunVideoAnalysisResponse() {}

  explicit RunVideoAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunVideoAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunVideoAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ListHotTopicSummariesResponse listHotTopicSummariesWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<ListHotTopicSummariesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotTopicSummariesResponse listHotTopicSummaries(shared_ptr<string> workspaceId, shared_ptr<ListHotTopicSummariesRequest> request);
  RunMarketingInformationExtractResponse runMarketingInformationExtractWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<RunMarketingInformationExtractRequest> tmpReq,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMarketingInformationExtractResponse runMarketingInformationExtract(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationExtractRequest> request);
  RunMarketingInformationWritingResponse runMarketingInformationWritingWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<RunMarketingInformationWritingRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMarketingInformationWritingResponse runMarketingInformationWriting(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationWritingRequest> request);
  RunScriptContinueResponse runScriptContinueWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<RunScriptContinueRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptContinueResponse runScriptContinue(shared_ptr<string> workspaceId, shared_ptr<RunScriptContinueRequest> request);
  RunScriptPlanningResponse runScriptPlanningWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<RunScriptPlanningRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptPlanningResponse runScriptPlanning(shared_ptr<string> workspaceId, shared_ptr<RunScriptPlanningRequest> request);
  RunStyleWritingResponse runStyleWritingWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunStyleWritingRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunStyleWritingResponse runStyleWriting(shared_ptr<string> workspaceId, shared_ptr<RunStyleWritingRequest> request);
  RunVideoAnalysisResponse runVideoAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<RunVideoAnalysisRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunVideoAnalysisResponse runVideoAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunVideoAnalysisRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_QuanMiaoLightApp20240801

#endif
